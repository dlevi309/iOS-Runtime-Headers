/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)prepareForReuse;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)startShimmering;
-(void)stopShimmeringAnimated:(BOOL)arg1 ;
-(void)setActiveItem:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)cancelShimmerTimer;
-(void)setShimmerTimer:(NSTimer *)arg1 ;
-(void)shimmerOnceWithCompletion:(/*^block*/id)arg1 ;
-(NSTimer *)shimmerTimer;
@end

