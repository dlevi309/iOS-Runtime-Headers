/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitor.h>

@class NSMutableDictionary, NSString;

@interface IMDContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor> {

	NSMutableDictionary* _aliasToCNIDMap;
	NSMutableDictionary* _CNIDToAliasesMap;

}

@property (nonatomic,retain) NSMutableDictionary * aliasToCNIDMap;                //@synthesize aliasToCNIDMap=_aliasToCNIDMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * CNIDToAliasesMap;              //@synthesize CNIDToAliasesMap=_CNIDToAliasesMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getAliasToCNIDMap;
-(id)initWithAliasToCNIDMap:(id)arg1 ;
-(id)getCNIDToAliasesMap;
-(void)setCNIDToAliasesMap:(NSMutableDictionary *)arg1 ;
-(id)generateCNIDToAliasesMapFrom:(id)arg1 ;
-(void)handleAddOrUpdateEventForCNContact:(id)arg1 ;
-(id)matchAliasesFromCacheForCNContact:(id)arg1 ;
-(NSMutableDictionary *)CNIDToAliasesMap;
-(void)removeAliasFromCNIDToAliasesMap:(id)arg1 withCNID:(id)arg2 ;
-(void)addAliasToCNIDToAliasMap:(id)arg1 withCNID:(id)arg2 ;
-(NSMutableDictionary *)aliasToCNIDMap;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)setAliasToCNIDMap:(NSMutableDictionary *)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(void)visitDropEverythingEvent:(id)arg1 ;
@end

