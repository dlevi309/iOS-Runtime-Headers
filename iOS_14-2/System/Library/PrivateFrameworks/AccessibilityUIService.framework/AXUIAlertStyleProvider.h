/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
*/

#import <AccessibilityUIService/AccessibilityUIService-Structs.h>
#import <libobjc.A.dylib/AXUIAlertStyleProvider.h>

@protocol AXUIAlertStyleProvider <NSObject>
@optional
-(double)alertBackgroundCornerRadiusForType:(unsigned long long)arg1;
-(id)alertBackgroundImageForType:(unsigned long long)arg1;
-(UIEdgeInsets*)alertBackgroundImageCapInsetsForType:(unsigned long long)arg1;

@required
-(BOOL)alertShouldGrowInAxis:(long long)arg1 forType:(unsigned long long)arg2;
-(double)alertTextLineHeightOffsetForType:(unsigned long long)arg1;
-(double)alertFadeAnimationDurationForType:(unsigned long long)arg1;
-(UIEdgeInsets*)alertContentEdgeInsetsForType:(unsigned long long)arg1;
-(id)alertSubtitleTextFontForType:(unsigned long long)arg1;
-(int)alertBackgroundStyleForType:(unsigned long long)arg1;
-(id)alertTextFontForType:(unsigned long long)arg1;
-(UIEdgeInsets*)alertIconImageEdgeInsetsForType:(unsigned long long)arg1;
-(int)alertPositionForType:(unsigned long long)arg1;
-(UIEdgeInsets*)alertEdgeInsetsForType:(unsigned long long)arg1;
-(double)alertSubtitleTextLineHeightOffsetForType:(unsigned long long)arg1;
-(id)alertTextColorForType:(unsigned long long)arg1;
-(double)alertSubtitleTextVerticalSpacingHeightWithTextForType:(unsigned long long)arg1;
-(CGSize*)alertBackgroundSizeForType:(unsigned long long)arg1;
-(id)alertSubtitleTextColorForType:(unsigned long long)arg1;

@end


@class NSBundle, NSString;

@interface AXUIAlertStyleProvider : NSObject <AXUIAlertStyleProvider> {

	NSBundle* _bundle;

}

@property (nonatomic,retain) NSBundle * bundle;                     //@synthesize bundle=_bundle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)styleProvider;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(double)alertBackgroundCornerRadiusForType:(unsigned long long)arg1 ;
-(BOOL)alertShouldGrowInAxis:(long long)arg1 forType:(unsigned long long)arg2 ;
-(double)alertTextLineHeightOffsetForType:(unsigned long long)arg1 ;
-(double)alertFadeAnimationDurationForType:(unsigned long long)arg1 ;
-(UIEdgeInsets)alertContentEdgeInsetsForType:(unsigned long long)arg1 ;
-(id)alertSubtitleTextFontForType:(unsigned long long)arg1 ;
-(int)alertBackgroundStyleForType:(unsigned long long)arg1 ;
-(id)alertTextFontForType:(unsigned long long)arg1 ;
-(UIEdgeInsets)alertIconImageEdgeInsetsForType:(unsigned long long)arg1 ;
-(int)alertPositionForType:(unsigned long long)arg1 ;
-(UIEdgeInsets)alertEdgeInsetsForType:(unsigned long long)arg1 ;
-(double)alertSubtitleTextLineHeightOffsetForType:(unsigned long long)arg1 ;
-(id)alertTextColorForType:(unsigned long long)arg1 ;
-(double)alertSubtitleTextVerticalSpacingHeightWithTextForType:(unsigned long long)arg1 ;
-(CGSize)alertBackgroundSizeForType:(unsigned long long)arg1 ;
-(id)alertSubtitleTextColorForType:(unsigned long long)arg1 ;
@end

