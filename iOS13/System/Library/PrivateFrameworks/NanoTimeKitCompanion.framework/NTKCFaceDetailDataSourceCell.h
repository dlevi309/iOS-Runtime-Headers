/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailToggleCell.h>

@class NSArray, UIImageView;

@interface NTKCFaceDetailDataSourceCell : NTKCFaceDetailToggleCell {

	NSArray* _bundleIdentifiers;
	UIImageView* _iconImageView;

}

@property (nonatomic,retain) UIImageView * iconImageView;                //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,readonly) NSArray * bundleIdentifiers;              //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(NSArray *)bundleIdentifiers;
-(id)initWithIdentifiers:(id)arg1 andLabel:(id)arg2 showIcon:(BOOL)arg3 isDonation:(BOOL)arg4 ;
@end

