/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVCompositionTrackFormatDescriptionReplacement : NSObject <NSSecureCoding> {

	opaqueCMFormatDescriptionRef _originalFormatDescription;
	opaqueCMFormatDescriptionRef _replacementFormatDescription;

}

@property (readonly) const opaqueCMFormatDescriptionRef originalFormatDescription; 
@property (readonly) const opaqueCMFormatDescriptionRef replacementFormatDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(const opaqueCMFormatDescriptionRef)originalFormatDescription;
-(const opaqueCMFormatDescriptionRef)replacementFormatDescription;
-(id)initWithOriginalFormatDescription:(opaqueCMFormatDescriptionRef)arg1 andReplacementFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
@end

