/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, UIImage, NSValue;

@interface AAUIUpdateMyPhotoRequest : AARequest {

	ACAccount* _account;
	UIImage* _photo;
	NSValue* _cropRect;

}
+(id)_downsampleImage:(id)arg1 fromStartingQuality:(double)arg2 toEndingQuality:(double)arg3 increment:(double)arg4 maxLength:(unsigned long long)arg5 ;
+(id)_fullScreen2ImageFromImage:(id)arg1 cropRect:(id)arg2 fullScreenCropRect:(id*)arg3 ;
-(id)urlString;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 photo:(id)arg2 cropRect:(id)arg3 ;
@end

