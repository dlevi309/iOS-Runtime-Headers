/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/DOCTagIconView.h>

@class NSString;

@interface DOCTagCheckmarkView : UIView <DOCTagIconView> {

	long long _tagColor;
	CGSize _checkmarkView;

}

@property (assign,nonatomic) CGSize checkmarkView;                  //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long tagColor;                    //@synthesize tagColor=_tagColor - In the implementation block
+(id)checkmarkImage;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)updateBackgroundColor;
-(CGSize)checkmarkView;
-(void)setCheckmarkView:(CGSize)arg1 ;
-(void)setTagColor:(long long)arg1 ;
-(void)updateLayoutOfLayers;
-(long long)tagColor;
@end

