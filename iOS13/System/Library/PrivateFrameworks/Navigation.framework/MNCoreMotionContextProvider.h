/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/GEOMotionContextProvider.h>

@protocol GEOMotionContextProviderDelegate;
@class CMActivityManager, MNTraceRecorder, NSString;

@interface MNCoreMotionContextProvider : NSObject <GEOMotionContextProvider> {

	CMActivityManager* _activityManager;
	id<GEOMotionContextProviderDelegate> _delegate;
	MNTraceRecorder* _traceRecorder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<GEOMotionContextProviderDelegate> motionDelegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)stopMotionUpdates;
-(void)setMotionDelegate:(id<GEOMotionContextProviderDelegate>)arg1 ;
-(void)startMotionUpdates;
-(id)initWithTraceRecorder:(id)arg1 ;
-(id<GEOMotionContextProviderDelegate>)motionDelegate;
@end

