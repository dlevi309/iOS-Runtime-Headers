/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface PXVideoProcessingOperationSpec : NSObject <NSCopying> {

	NSURL* _inputVideoURL;
	NSURL* _outputURL;
	NSURL* _debugInfoOutputURL;

}

@property (nonatomic,retain) NSURL * inputVideoURL;                   //@synthesize inputVideoURL=_inputVideoURL - In the implementation block
@property (nonatomic,retain) NSURL * outputURL;                       //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,retain) NSURL * debugInfoOutputURL;              //@synthesize debugInfoOutputURL=_debugInfoOutputURL - In the implementation block
-(NSURL *)outputURL;
-(void)setOutputURL:(NSURL *)arg1 ;
-(NSURL *)inputVideoURL;
-(void)setInputVideoURL:(NSURL *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)debugInfoOutputURL;
-(void)setDebugInfoOutputURL:(NSURL *)arg1 ;
@end

