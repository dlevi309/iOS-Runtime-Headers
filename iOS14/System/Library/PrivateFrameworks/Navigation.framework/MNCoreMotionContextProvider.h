/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic,__weak) id<GEOMotionContextProviderDelegate> motionDelegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stopMotionUpdates;
-(void)setMotionDelegate:(id<GEOMotionContextProviderDelegate>)arg1 ;
-(void)startMotionUpdates;
-(id)initWithTraceRecorder:(id)arg1 ;
-(id<GEOMotionContextProviderDelegate>)motionDelegate;
@end

