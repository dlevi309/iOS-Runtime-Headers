/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)_fontSizeDidChange;
@end

