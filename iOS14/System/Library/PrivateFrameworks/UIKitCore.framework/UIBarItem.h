/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIAppearance.h>

@class UIImage, NSString;

@interface UIBarItem : NSObject <NSCoding, UIAppearance> {

	BOOL _hasCustomizableInstanceAppearanceModifications;
	BOOL _shouldArchiveUIAppearanceTags;
	UIImage* _largeContentSizeImage;
	long long _tag;
	UIEdgeInsets _largeContentSizeImageInsets;

}

@property (assign,setter=_setHasCustomizableInstanceAppearanceModifications:,nonatomic) BOOL _hasCustomizableInstanceAppearanceModifications;              //@synthesize hasCustomizableInstanceAppearanceModifications=_hasCustomizableInstanceAppearanceModifications - In the implementation block
@property (assign,setter=_setShouldArchiveUIAppearanceTags:,nonatomic) BOOL _shouldArchiveUIAppearanceTags;                                                //@synthesize shouldArchiveUIAppearanceTags=_shouldArchiveUIAppearanceTags - In the implementation block
@property (nonatomic,copy,readonly) NSString * resolvedTitle; 
@property (nonatomic,readonly) BOOL selected; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,readonly) BOOL hasImage; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * landscapeImagePhone; 
@property (nonatomic,retain) UIImage * largeContentSizeImage;                                                                                              //@synthesize largeContentSizeImage=_largeContentSizeImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets; 
@property (assign,nonatomic) UIEdgeInsets landscapeImagePhoneInsets; 
@property (assign,nonatomic) UIEdgeInsets largeContentSizeImageInsets;                                                                                     //@synthesize largeContentSizeImageInsets=_largeContentSizeImageInsets - In the implementation block
@property (assign,nonatomic) long long tag;                                                                                                                //@synthesize tag=_tag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appearanceForTraitCollection:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2 ;
+(id)appearanceWhenContainedInInstancesOfClasses:(id)arg1 ;
+(id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2 ;
+(id)appearance;
+(id)_appearanceBlindViewClasses;
+(id)_appearanceWhenContainedIn:(id)arg1 ;
+(id)appearanceWhenContainedIn:(Class)arg1 ;
+(id)appearanceForTraitCollection:(id)arg1 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)init;
-(void)setTag:(long long)arg1 ;
-(BOOL)hasTitle;
-(void)_setHasCustomizableInstanceAppearanceModifications:(BOOL)arg1 ;
-(BOOL)hasImage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_attributedTitleForState:(unsigned long long)arg1 withDefaultAttributes:(id)arg2 ;
-(long long)tag;
-(BOOL)_hasCustomizableInstanceAppearanceModifications;
-(BOOL)selected;
-(void)_setShouldArchiveUIAppearanceTags:(BOOL)arg1 ;
-(UIEdgeInsets)largeContentSizeImageInsets;
-(id)initWithCoder:(id)arg1 ;
-(void)setLargeContentSizeImage:(UIImage *)arg1 ;
-(UIImage *)largeContentSizeImage;
-(void)setLargeContentSizeImageInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_shouldArchiveUIAppearanceTags;
-(NSString *)resolvedTitle;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
@end

