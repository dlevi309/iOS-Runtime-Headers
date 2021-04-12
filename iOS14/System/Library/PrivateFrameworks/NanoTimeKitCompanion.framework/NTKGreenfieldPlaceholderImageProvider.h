/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <ClockKit/CLKImageProvider.h>

@class UIImage;

@interface NTKGreenfieldPlaceholderImageProvider : CLKImageProvider {

	double _progress;
	UIImage* _appIcon;

}

@property (assign,nonatomic) double progress;                //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIImage * appIcon;              //@synthesize appIcon=_appIcon - In the implementation block
+(id)provider;
-(double)progress;
-(void)setAppIcon:(UIImage *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(UIImage *)appIcon;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

