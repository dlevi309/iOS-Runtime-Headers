/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>

@protocol HFIconDescriptor;
@class NSString, UIColor, NSObject;

@interface HUQuickControlIconViewProfile : HUQuickControlViewProfile {

	NSString* _statusString;
	UIColor* _statusTextColor;
	NSString* _supplementaryString;
	NSObject*<HFIconDescriptor> _iconDescriptor;

}

@property (nonatomic,retain) NSString * statusString;                                 //@synthesize statusString=_statusString - In the implementation block
@property (nonatomic,retain) UIColor * statusTextColor;                               //@synthesize statusTextColor=_statusTextColor - In the implementation block
@property (nonatomic,retain) NSString * supplementaryString;                          //@synthesize supplementaryString=_supplementaryString - In the implementation block
@property (nonatomic,retain) NSObject*<HFIconDescriptor> iconDescriptor;              //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)statusString;
-(void)setStatusString:(NSString *)arg1 ;
-(UIColor *)statusTextColor;
-(NSObject*<HFIconDescriptor>)iconDescriptor;
-(void)setIconDescriptor:(NSObject*<HFIconDescriptor>)arg1 ;
-(NSString *)supplementaryString;
-(void)setStatusTextColor:(UIColor *)arg1 ;
-(void)setSupplementaryString:(NSString *)arg1 ;
@end

