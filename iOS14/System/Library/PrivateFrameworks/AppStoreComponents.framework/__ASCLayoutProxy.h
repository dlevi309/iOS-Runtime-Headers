/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


#import <AppStoreComponents/AppStoreComponents-Structs.h>
@class NSString;

@interface __ASCLayoutProxy : NSObject {

	 base;

}

@property (readonly,nonatomic) NSString * description; 
+(double)offerButtonHeight;
+(double)offerProgressDiameter;
+(id)offerEmptyLayoutWithImageView:(id)arg1 titleView:(id)arg2 subtitleView:(id)arg3 ;
+(id)offerTextLayoutWithTitleBackgroundView:(id)arg1 titleView:(id)arg2 subtitleView:(id)arg3 hasTrailingSubtitle:(BOOL)arg4 ;
+(id)offerIconLayoutWithImageView:(id)arg1 titleView:(id)arg2 subtitleView:(id)arg3 hasTrailingSubtitle:(BOOL)arg4 ;
+(id)traitEnvironmentWithTraitCollection:(id)arg1 ;
+(id)lockupLayoutOfSize:(id)arg1 traitCollection:(id)arg2 artworkView:(id)arg3 headingText:(id)arg4 titleText:(id)arg5 subtitleText:(id)arg6 offerText:(id)arg7 offerButton:(id)arg8 ;
+(id)tvTextPillOverlayWithBackgroundView:(id)arg1 textView:(id)arg2 ;
+(double)axOfferButtonHeight;
-(id)init;
-(NSString *)description;
-(CGSize)measuredSizeFittingSize:(CGSize)arg1 inTraitEnvironment:(id)arg2 ;
-(UIEdgeInsets)alignmentInsetsInTraitEnvironment:(id)arg1 ;
-(void)placeChildrenRelativeToRect:(CGRect)arg1 inTraitEnvironment:(id)arg2 ;
@end

