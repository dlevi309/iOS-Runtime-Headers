/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSString;

@interface _NTKCGalleryCollectionFooter : UICollectionReusableView {

	UILabel* _label;

}

@property (nonatomic,retain) NSString * text; 
+(id)reuseIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_fontSizeDidChange;
@end

