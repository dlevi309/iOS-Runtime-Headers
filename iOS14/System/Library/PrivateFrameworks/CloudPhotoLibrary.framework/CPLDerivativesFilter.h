/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CPLDerivativesFilter : NSObject <NSSecureCoding> {

	BOOL _dropForImages;
	BOOL _dropForVideos;

}
+(BOOL)supportsSecureCoding;
+(id)dropDerivativesForImages:(BOOL)arg1 videos:(BOOL)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)redactedDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initDroppingDerivativesForImages:(BOOL)arg1 videos:(BOOL)arg2 ;
-(BOOL)mightDropSomeDerivativesForSourceType:(unsigned long long)arg1 isVideo:(BOOL)arg2 ;
-(BOOL)shouldDropDerivativeOfType:(unsigned long long)arg1 fromSourceType:(unsigned long long)arg2 isVideo:(BOOL)arg3 ;
@end

