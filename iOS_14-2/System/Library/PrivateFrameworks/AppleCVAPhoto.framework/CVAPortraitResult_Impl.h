/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CVBufferRef)portraitPixelBuffer;
-(float)portraitStability;
-(void)dealloc;
-(id<CVAMattingResult>)mattingResult;
-(float)relightingStability;
-(id)initWithMattingResult:(id)arg1 portraitPixelBuffer:(CVBufferRef)arg2 portraitStability:(float)arg3 ;
-(id)initWithMattingResult:(id)arg1 portraitPixelBuffer:(CVBufferRef)arg2 portraitStability:(float)arg3 relightingStability:(float)arg4 ;
@end

