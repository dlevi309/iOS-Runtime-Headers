/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
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

