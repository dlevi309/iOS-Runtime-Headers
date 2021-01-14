/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UILabel, NSTimer;

@interface AVTGroupDialCell : UICollectionViewCell {

	NSString* _string;
	UILabel* _label;
	NSTimer* _shimmerTimer;

}

@property (nonatomic,readonly) UILabel * label;                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSTimer * shimmerTimer;              //@synthesize shimmerTimer=_shimmerTimer - In the implementation block
@property (nonatomic,copy) NSString * string;                     //@synthesize string=_string - In the implementation block
+(id)labelFont;
+(id)cellIdentifier;
+(id)boldLabelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)startShimmering;
-(void)stopShimmeringAnimated:(BOOL)arg1 ;
-(void)setActiveItem:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(UILabel *)label;
-(NSTimer *)shimmerTimer;
-(void)cancelShimmerTimer;
-(void)setShimmerTimer:(NSTimer *)arg1 ;
-(void)shimmerOnceWithCompletion:(/*^block*/id)arg1 ;
@end

