/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@class NSString, UIColor;

@interface AAUIiCloudMediaUsageInfo : NSObject {

	float _bytesUsed;
	NSString* _mediaType;
	UIColor* _representativeColor;
	NSString* _displayLabel;

}

@property (nonatomic,retain) NSString * mediaType;                       //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) UIColor * representativeColor;              //@synthesize representativeColor=_representativeColor - In the implementation block
@property (assign,nonatomic) float bytesUsed;                            //@synthesize bytesUsed=_bytesUsed - In the implementation block
@property (nonatomic,retain) NSString * displayLabel;                    //@synthesize displayLabel=_displayLabel - In the implementation block
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(float)bytesUsed;
-(void)setBytesUsed:(float)arg1 ;
-(NSString *)displayLabel;
-(void)setDisplayLabel:(NSString *)arg1 ;
-(id)initWithMediaType:(id)arg1 representativeColor:(id)arg2 bytesUsed:(float)arg3 ;
-(id)capacityBarCatagory;
-(UIColor *)representativeColor;
-(void)setRepresentativeColor:(UIColor *)arg1 ;
@end

