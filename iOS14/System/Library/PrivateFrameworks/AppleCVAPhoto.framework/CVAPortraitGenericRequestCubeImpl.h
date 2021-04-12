/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCubeData:(NSData *)arg1 ;
-(NSData *)cubeData;
-(void)dealloc;
-(CVBufferRef)sourceColorPixelBuffer;
-(void)setSourceColorPixelBuffer:(CVBufferRef)arg1 ;
-(id<CVAPortraitVideoPipeline>)portraitVideoPipeline;
-(void)setPortraitVideoPipeline:(id<CVAPortraitVideoPipeline>)arg1 ;
@end

