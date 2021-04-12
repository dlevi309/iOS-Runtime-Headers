/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVCompositionTrackFormatDescriptionReplacement : NSObject <NSSecureCoding> {

	opaqueCMFormatDescriptionRef _originalFormatDescription;
	opaqueCMFormatDescriptionRef _replacementFormatDescription;

}

@property (readonly) const opaqueCMFormatDescriptionRef originalFormatDescription; 
@property (readonly) const opaqueCMFormatDescriptionRef replacementFormatDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const opaqueCMFormatDescriptionRef)originalFormatDescription;
-(const opaqueCMFormatDescriptionRef)replacementFormatDescription;
-(id)initWithOriginalFormatDescription:(opaqueCMFormatDescriptionRef)arg1 andReplacementFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
@end

