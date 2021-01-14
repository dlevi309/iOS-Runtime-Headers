/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary;

@interface CAMPanoramaConfiguration : NSObject <NSCoding> {

	int _ringBufferSize;
	long long _sampleBufferWidth;
	long long _sampleBufferHeight;
	long long _maxWidth;
	NSDictionary* __maxWidthPerDevice;
	SCD_Struct_CA7 _minimumFramerate;
	SCD_Struct_CA7 _maximumFramerate;

}

@property (nonatomic,retain) NSDictionary * _maxWidthPerDevice;              //@synthesize _maxWidthPerDevice=__maxWidthPerDevice - In the implementation block
@property (nonatomic,readonly) long long sampleBufferWidth;                  //@synthesize sampleBufferWidth=_sampleBufferWidth - In the implementation block
@property (nonatomic,readonly) long long sampleBufferHeight;                 //@synthesize sampleBufferHeight=_sampleBufferHeight - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 minimumFramerate;              //@synthesize minimumFramerate=_minimumFramerate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 maximumFramerate;              //@synthesize maximumFramerate=_maximumFramerate - In the implementation block
@property (nonatomic,readonly) int ringBufferSize;                           //@synthesize ringBufferSize=_ringBufferSize - In the implementation block
@property (nonatomic,readonly) long long maxWidth;                           //@synthesize maxWidth=_maxWidth - In the implementation block
+(id)sharedInstance;
-(long long)maxWidth;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithACTConfiguration:(id)arg1 ;
-(NSDictionary *)_maxWidthPerDevice;
-(long long)maxWidthForDevice:(long long)arg1 ;
-(long long)sampleBufferWidth;
-(long long)sampleBufferHeight;
-(SCD_Struct_CA7)minimumFramerate;
-(SCD_Struct_CA7)maximumFramerate;
-(int)ringBufferSize;
-(void)set_maxWidthPerDevice:(NSDictionary *)arg1 ;
@end

