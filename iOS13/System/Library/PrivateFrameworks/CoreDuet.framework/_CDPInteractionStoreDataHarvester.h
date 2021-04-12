/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDPDataHarvester.h>

@class NSMutableDictionary, _CDInteractionStore, NSPredicate, NSArray, NSString;

@interface _CDPInteractionStoreDataHarvester : NSObject <_CDPDataHarvester> {

	NSMutableDictionary* _identifierToContactMap;
	_CDInteractionStore* _store;
	NSPredicate* _predicate;
	NSArray* _interactions;

}

@property (nonatomic,retain) _CDInteractionStore * store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                  //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) NSArray * interactions;                 //@synthesize interactions=_interactions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(_CDInteractionStore *)store;
-(NSArray *)interactions;
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)contactForIdentifier:(id)arg1 ;
@end

