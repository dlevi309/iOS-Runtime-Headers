/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)appearance;
+(id)appearanceWhenContainedInInstancesOfClasses:(id)arg1 ;
+(id)_appearanceBlindViewClasses;
+(id)_appearanceWhenContainedIn:(id)arg1 ;
+(id)appearanceWhenContainedIn:(Class)arg1 ;
+(id)appearanceForTraitCollection:(id)arg1 ;
+(id)appearanceForTraitCollection:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2 ;
+(id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)tag;
-(UIEdgeInsets)largeContentSizeImageInsets;
-(NSString *)resolvedTitle;
-(UIImage *)largeContentSizeImage;
-(BOOL)hasTitle;
-(BOOL)selected;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(BOOL)hasImage;
-(id)_attributedTitleForState:(unsigned long long)arg1 withDefaultAttributes:(id)arg2 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setTag:(long long)arg1 ;
-(void)setLargeContentSizeImage:(UIImage *)arg1 ;
-(void)setLargeContentSizeImageInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_hasCustomizableInstanceAppearanceModifications;
-(void)_setHasCustomizableInstanceAppearanceModifications:(BOOL)arg1 ;
-(BOOL)_shouldArchiveUIAppearanceTags;
-(void)_setShouldArchiveUIAppearanceTags:(BOOL)arg1 ;
@end

