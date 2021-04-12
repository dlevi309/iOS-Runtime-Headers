/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)visitDropEverythingEvent:(id)arg1 ;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(id)generateCNIDToAliasesMapFrom:(id)arg1 ;
-(void)handleAddOrUpdateEventForCNContact:(id)arg1 ;
-(id)matchAliasesFromCacheForCNContact:(id)arg1 ;
-(id)initWithAliasToCNIDMap:(id)arg1 ;
-(id)getAliasToCNIDMap;
-(NSMutableDictionary *)aliasToCNIDMap;
-(void)setAliasToCNIDMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)CNIDToAliasesMap;
-(void)setCNIDToAliasesMap:(NSMutableDictionary *)arg1 ;
@end

