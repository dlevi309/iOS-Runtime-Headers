/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)recalculateLostMode;
-(id)init;
-(NSObject*<OS_dispatch_queue>)stateManagerQueue;
-(id)_readSharedInfo;
-(BOOL)fmipActive;
-(BOOL)_removeSharedInfo;
-(BOOL)_writeSharedInfo:(id)arg1 ;
-(id)_fmipSharedFileURL;
-(void)setStateManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSURL *)fmipSharedFileStaticURL;
-(void)setFmipSharedFileStaticURL:(NSURL *)arg1 ;
-(unsigned long long)lostModeType;
-(void)setFMiPActive:(BOOL)arg1 ;
@end

