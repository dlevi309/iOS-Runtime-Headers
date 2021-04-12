/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)maxWidth;
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

