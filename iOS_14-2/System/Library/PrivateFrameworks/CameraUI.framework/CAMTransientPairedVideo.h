/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSURL;

@interface CAMTransientPairedVideo : NSObject {

	NSURL* _url;
	long long _filterType;
	SCD_Struct_CA7 _stillDisplayTime;

}

@property (nonatomic,copy,readonly) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 stillDisplayTime;              //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (nonatomic,readonly) long long filterType;                         //@synthesize filterType=_filterType - In the implementation block
-(long long)filterType;
-(NSURL *)url;
-(SCD_Struct_CA7)stillDisplayTime;
-(id)initWithURL:(id)arg1 stillDisplayTime:(SCD_Struct_CA7)arg2 filterType:(long long)arg3 ;
@end

