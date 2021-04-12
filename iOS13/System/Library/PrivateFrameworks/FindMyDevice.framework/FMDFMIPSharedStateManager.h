/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface FMDFMIPSharedStateManager : NSObject {

	NSURL* _fmipSharedFileStaticURL;
	NSObject*<OS_dispatch_queue> _stateManagerQueue;

}

@property (retain) NSURL * fmipSharedFileStaticURL;                                       //@synthesize fmipSharedFileStaticURL=_fmipSharedFileStaticURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateManagerQueue;              //@synthesize stateManagerQueue=_stateManagerQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(unsigned long long)lostModeType;
-(BOOL)fmipActive;
-(id)_fmipSharedFileURL;
-(id)_readSharedInfo;
-(BOOL)_writeSharedInfo:(id)arg1 ;
-(NSURL *)fmipSharedFileStaticURL;
-(void)setFmipSharedFileStaticURL:(NSURL *)arg1 ;
-(void)setFMiPActive:(BOOL)arg1 ;
-(void)recalculateLostMode;
-(BOOL)_removeSharedInfo;
-(NSObject*<OS_dispatch_queue>)stateManagerQueue;
-(void)setStateManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

