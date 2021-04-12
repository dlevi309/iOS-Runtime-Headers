/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)url;
-(long long)filterType;
-(SCD_Struct_CA7)stillDisplayTime;
-(id)initWithURL:(id)arg1 stillDisplayTime:(SCD_Struct_CA7)arg2 filterType:(long long)arg3 ;
@end

