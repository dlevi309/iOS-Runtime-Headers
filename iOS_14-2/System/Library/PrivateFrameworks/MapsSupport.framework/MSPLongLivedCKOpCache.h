/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@class NSUserDefaults, NSMutableSet;

@interface MSPLongLivedCKOpCache : NSObject {

	NSUserDefaults* _defaults;
	NSMutableSet* _currentOpIDs;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) NSMutableSet * currentOpIDs;              //@synthesize currentOpIDs=_currentOpIDs - In the implementation block
+(id)sharedCache;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)defaults;
-(id)init;
-(void)setCurrentOpIDs:(NSMutableSet *)arg1 ;
-(id)_operationIDsByType;
-(id)_operationIDsForType:(id)arg1 ;
-(void)_setOperationIDs:(id)arg1 forType:(id)arg2 ;
-(NSMutableSet *)currentOpIDs;
-(void)addOperation:(id)arg1 forType:(id)arg2 ;
-(void)removeOperation:(id)arg1 forType:(id)arg2 ;
-(void)pruneOperationsToIDs:(id)arg1 ;
-(BOOL)hasOperationID:(id)arg1 forType:(id)arg2 ;
-(BOOL)isAwareOfOperationID:(id)arg1 ;
-(BOOL)isCurrentOperationID:(id)arg1 ;
@end

