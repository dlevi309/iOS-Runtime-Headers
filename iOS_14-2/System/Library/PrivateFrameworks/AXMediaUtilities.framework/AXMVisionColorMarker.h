/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMVisionColor.h>

@class NSString;

@interface AXMVisionColorMarker : AXMVisionColor {

	NSString* _localizedName;

}

@property (nonatomic,retain) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
+(id)colorWithHueDegrees:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 localizedName:(id)arg4 ;
+(id)allColorMarkers;
+(id)closestMarkerToColor:(id)arg1 withMaximumThreshold:(double)arg2 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(id)description;
@end

