/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <libobjc.A.dylib/CVAPortraitResult.h>

@protocol CVAMattingResult;
@class NSString;

@interface CVAPortraitResult_Impl : NSObject <CVAPortraitResult> {

	float _portraitStability;
	float _relightingStability;
	id<CVAMattingResult> _mattingResult;
	CVBufferRef _portraitPixelBuffer;

}

@property (readonly) id<CVAMattingResult> mattingResult;              //@synthesize mattingResult=_mattingResult - In the implementation block
@property (readonly) CVBufferRef portraitPixelBuffer;                 //@synthesize portraitPixelBuffer=_portraitPixelBuffer - In the implementation block
@property (readonly) float portraitStability;                         //@synthesize portraitStability=_portraitStability - In the implementation block
@property (readonly) float relightingStability;                       //@synthesize relightingStability=_relightingStability - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CVBufferRef)portraitPixelBuffer;
-(float)portraitStability;
-(id<CVAMattingResult>)mattingResult;
-(float)relightingStability;
-(id)initWithMattingResult:(id)arg1 portraitPixelBuffer:(CVBufferRef)arg2 portraitStability:(float)arg3 ;
-(id)initWithMattingResult:(id)arg1 portraitPixelBuffer:(CVBufferRef)arg2 portraitStability:(float)arg3 relightingStability:(float)arg4 ;
@end

