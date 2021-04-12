/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>

@class CLKDevice, UIImageView, UILabel, NSString;

@interface NTKAlbumEmptyView : UIView {

	CLKDevice* _device;
	UIImageView* _iconImageView;
	UILabel* _headerLabel;
	NSString* _headerLabelText;
	UILabel* _bodyLabel;
	NSString* _bodyLabelText;

}

@property (nonatomic,retain) NSString * headerLabelText;              //@synthesize headerLabelText=_headerLabelText - In the implementation block
@property (nonatomic,retain) NSString * bodyLabelText;                //@synthesize bodyLabelText=_bodyLabelText - In the implementation block
-(void)layoutSubviews;
-(void)setHeaderLabelText:(NSString *)arg1 ;
-(NSString *)headerLabelText;
-(id)initForDevice:(id)arg1 ;
-(void)setBodyLabelText:(NSString *)arg1 ;
-(NSString *)bodyLabelText;
@end

