/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <libobjc.A.dylib/CVABackgroundRequest.h>

@class NSString;

@interface CVABackgroundRequestImplSourceImage : NSObject <CVABackgroundRequest> {

	CVBufferRef _sourceColorPixelBuffer;

}

@property (assign) CVBufferRef sourceColorPixelBuffer;              //@synthesize sourceColorPixelBuffer=_sourceColorPixelBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVBufferRef)sourceColorPixelBuffer;
-(void)setSourceColorPixelBuffer:(CVBufferRef)arg1 ;
@end

