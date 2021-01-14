/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@class NSString, NSOutputStream;

@interface ARBVHExporter : NSObject {

	NSString* _filePath;
	NSString* _tmpFilePath;
	int _numberFrames;
	 _scale;
	long long _exportType;
	NSOutputStream* _framesStreamToFile;
	BOOL _running;

}

@property (nonatomic,readonly) BOOL running;              //@synthesize running=_running - In the implementation block
+(id)headerByApplyingScale:;
+(id)liftedSkeletonHeaderByApplyingScale:;
+(id)stickFigureHeaderByApplyingScale:;
-(BOOL)running;
-(void)start;
-(void)stop;
-(id)initWithFilePath:(id)arg1 type:(long long)arg2 ;
-(void)appendBodyAnchor:(id)arg1 ;
@end

