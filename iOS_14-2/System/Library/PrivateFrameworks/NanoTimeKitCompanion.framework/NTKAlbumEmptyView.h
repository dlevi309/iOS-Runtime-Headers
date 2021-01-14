/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeaderLabelText:(NSString *)arg1 ;
-(NSString *)headerLabelText;
-(void)layoutSubviews;
-(id)initForDevice:(id)arg1 ;
-(void)setBodyLabelText:(NSString *)arg1 ;
-(NSString *)bodyLabelText;
@end

