/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@protocol PLPlatter, CSAdjunctItemHosting;
@class NSString, UIView;

@interface CSAdjunctItemView : UIView <MTMaterialGrouping> {

	long long _recipe;
	UIView*<PLPlatter> _platterView;
	BOOL _isContentHostPlatterView;
	NSString* _materialGroupNameBase;
	id<CSAdjunctItemHosting> _contentHost;
	CGSize _sizeToMimic;

}

@property (assign,nonatomic) CGSize sizeToMimic;                                       //@synthesize sizeToMimic=_sizeToMimic - In the implementation block
@property (assign,nonatomic,__weak) id<CSAdjunctItemHosting> contentHost;              //@synthesize contentHost=_contentHost - In the implementation block
@property (nonatomic,copy) NSString * materialGroupNameBase;                           //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(NSString *)materialGroupNameBase;
-(CGSize)sizeToMimic;
-(id)initWithRecipe:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSizeToMimic:(CGSize)arg1 ;
-(void)setContentHost:(id<CSAdjunctItemHosting>)arg1 ;
-(id<CSAdjunctItemHosting>)contentHost;
-(void)_updateSizeToMimic;
-(void)_setPlatterView:(id)arg1 ;
@end

