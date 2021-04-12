/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class UIColor, NSAttributedString, UIImage;

@interface SKUIIndexBarEntry : NSObject {

	CGSize _contentSize;
	BOOL _hasValidContentSize;
	UIColor* _tintColor;
	long long _entryType;
	long long _visibilityPriority;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,copy) UIColor * tintColor; 
@property (assign,nonatomic) long long entryType;                                       //@synthesize entryType=_entryType - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                            //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (nonatomic,readonly) NSAttributedString * entryAttributedString; 
@property (nonatomic,readonly) UIImage * entryImage; 
@property (assign,nonatomic) long long visibilityPriority;                              //@synthesize visibilityPriority=_visibilityPriority - In the implementation block
+(id)entryWithAttributedString:(id)arg1 ;
+(id)entryWithImage:(id)arg1 ;
+(id)placeholderEntryWithSize:(CGSize)arg1 ;
+(id)systemCombinedEntry;
-(void)setTintColor:(UIColor *)arg1 ;
-(CGSize)size;
-(CGSize)contentSize;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_tintColorDidChange;
-(void)setEntryType:(long long)arg1 ;
-(unsigned long long)hash;
-(UIEdgeInsets)contentEdgeInsets;
-(long long)entryType;
-(UIColor *)tintColor;
-(BOOL)isEqual:(id)arg1 ;
-(long long)visibilityPriority;
-(void)setVisibilityPriority:(long long)arg1 ;
-(CGSize)_calculatedContentSize;
-(void)_drawContentInRect:(CGRect)arg1 ;
-(NSAttributedString *)entryAttributedString;
-(UIImage *)entryImage;
-(void)_drawInRect:(CGRect)arg1 ;
@end

