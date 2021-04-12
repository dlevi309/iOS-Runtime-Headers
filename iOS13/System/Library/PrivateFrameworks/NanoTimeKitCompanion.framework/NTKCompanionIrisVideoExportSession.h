/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSObject, AVAsset, NSURL, NSError;

@interface NTKCompanionIrisVideoExportSession : NSObject {

	NSObject*<OS_dispatch_queue> _exportQueue;
	NSObject*<OS_dispatch_queue> _encodeQueue;
	AVAsset* _video;
	unsigned long long _bitrate;
	NSURL* _outputURL;
	long long _status;
	NSError* _error;
	CGSize _outputSize;
	CGRect _crop;

}

@property (nonatomic,retain) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long status;                          //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) AVAsset * video;                         //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) CGRect crop;                             //@synthesize crop=_crop - In the implementation block
@property (nonatomic,readonly) CGSize outputSize;                       //@synthesize outputSize=_outputSize - In the implementation block
@property (nonatomic,readonly) unsigned long long bitrate;              //@synthesize bitrate=_bitrate - In the implementation block
@property (nonatomic,readonly) NSURL * outputURL;                       //@synthesize outputURL=_outputURL - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)status;
-(CGRect)crop;
-(CGSize)outputSize;
-(void)setStatus:(long long)arg1 ;
-(NSURL *)outputURL;
-(AVAsset *)video;
-(unsigned long long)bitrate;
-(id)initWithVideo:(id)arg1 crop:(CGRect)arg2 outputSize:(CGSize)arg3 bitrate:(unsigned long long)arg4 outputURL:(id)arg5 ;
-(void)exportAsynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(id)_makeReader;
-(id)_makeWriter;
@end

