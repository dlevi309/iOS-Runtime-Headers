/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
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
-(void)stop;
-(void)start;
-(BOOL)running;
-(id)initWithFilePath:(id)arg1 type:(long long)arg2 ;
-(void)appendBodyAnchor:(id)arg1 ;
@end

