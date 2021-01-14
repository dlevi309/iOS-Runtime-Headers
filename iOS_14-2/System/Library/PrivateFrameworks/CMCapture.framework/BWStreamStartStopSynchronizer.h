/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
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
-(void)streamDidStop:(id)arg1 ;
-(void)streamDidStart:(id)arg1 ;
-(BOOL)waitForMasterAEToSettle;
-(void)setWaitForMasterAEToSettle:(BOOL)arg1 ;
-(id)initWithStreams:(id)arg1 timeoutInSeconds:(float)arg2 ;
-(void)setSynchronizationSlavesOrderedByPriority:(NSArray *)arg1 ;
-(NSArray *)synchronizationSlavesOrderedByPriority;
-(BOOL)streamWillStart:(id)arg1 ;
-(BOOL)streamWillStop:(id)arg1 ;
-(void)dealloc;
@end

