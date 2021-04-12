/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initDroppingDerivativesForImages:(BOOL)arg1 videos:(BOOL)arg2 ;
-(BOOL)mightDropSomeDerivativesForSourceType:(unsigned long long)arg1 isVideo:(BOOL)arg2 ;
-(BOOL)shouldDropDerivativeOfType:(unsigned long long)arg1 fromSourceType:(unsigned long long)arg2 isVideo:(BOOL)arg3 ;
@end

