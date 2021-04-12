/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <libobjc.A.dylib/CVAPortraitGenericRequest.h>

@protocol CVAPortraitVideoPipeline;
@class NSData, NSString;

@interface CVAPortraitGenericRequestCubeImpl : NSObject <CVAPortraitGenericRequest> {

	id<CVAPortraitVideoPipeline> _portraitVideoPipeline;
	CVBufferRef _sourceColorPixelBuffer;
	NSData* _cubeData;

}

@property (retain) id<CVAPortraitVideoPipeline> portraitVideoPipeline;              //@synthesize portraitVideoPipeline=_portraitVideoPipeline - In the implementation block
@property (assign) CVBufferRef sourceColorPixelBuffer;                              //@synthesize sourceColorPixelBuffer=_sourceColorPixelBuffer - In the implementation block
@property (retain) NSData * cubeData;                                               //@synthesize cubeData=_cubeData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSData *)cubeData;
-(void)setCubeData:(NSData *)arg1 ;
-(CVBufferRef)sourceColorPixelBuffer;
-(void)setSourceColorPixelBuffer:(CVBufferRef)arg1 ;
-(id<CVAPortraitVideoPipeline>)portraitVideoPipeline;
-(void)setPortraitVideoPipeline:(id<CVAPortraitVideoPipeline>)arg1 ;
@end

