/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class NSDictionary, NSArray;

@interface BWStreamStartStopSynchronizer : NSObject {

	NSDictionary* _streamStatesByPortType;
	float _timeoutInSeconds;
	BOOL _masterStartedGroupEntered;
	NSArray* _synchronizationSlavesOrderedByPriority;

}

@property (assign,nonatomic) BOOL waitForMasterAEToSettle; 
@property (nonatomic,retain) NSArray * synchronizationSlavesOrderedByPriority; 
+(void)initialize;
-(void)dealloc;
-(BOOL)waitForMasterAEToSettle;
-(void)setWaitForMasterAEToSettle:(BOOL)arg1 ;
-(id)initWithStreams:(id)arg1 timeoutInSeconds:(float)arg2 ;
-(void)setSynchronizationSlavesOrderedByPriority:(NSArray *)arg1 ;
-(NSArray *)synchronizationSlavesOrderedByPriority;
-(BOOL)streamWillStart:(id)arg1 ;
-(void)streamDidStart:(id)arg1 ;
-(BOOL)streamWillStop:(id)arg1 ;
-(void)streamDidStop:(id)arg1 ;
@end

