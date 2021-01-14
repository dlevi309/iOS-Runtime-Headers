/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@class CellularLogging, NSHashTable;

@interface SBFRemoteBasebandLoggingManager : NSObject {

	CellularLogging* _cellularLogging;
	NSHashTable* _observers;

}

@property (nonatomic,retain) CellularLogging * cellularLogging;              //@synthesize cellularLogging=_cellularLogging - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                        //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)_notifyObservers;
-(id)init;
-(CellularLogging *)cellularLogging;
-(void)setCellularLogging:(CellularLogging *)arg1 ;
-(BOOL)isLogCollectionEnabled;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
@end

