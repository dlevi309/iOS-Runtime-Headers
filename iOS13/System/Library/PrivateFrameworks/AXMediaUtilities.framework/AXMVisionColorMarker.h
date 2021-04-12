/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)localizedName;
-(void)setLocalizedName:(NSString *)arg1 ;
@end

