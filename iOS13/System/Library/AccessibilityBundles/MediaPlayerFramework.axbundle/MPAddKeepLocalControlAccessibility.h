/*
* Generated on Monday, March 1, 2021 at 2:35:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/MediaPlayerFramework.axbundle/MediaPlayerFramework
*/

#import <MediaPlayerFramework/MediaPlayerFramework-Structs.h>
#import <MediaPlayerFramework/__MPAddKeepLocalControlAccessibility_super.h>

@interface MPAddKeepLocalControlAccessibility : __MPAddKeepLocalControlAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setControlStatus:(MPAddKeepLocalControlStatus)arg1 animated:(BOOL)arg2 ;
-(id)_accessibilityLabelForStatusType:(long long)arg1 ;
-(id)_accessibilityValueForStatusType:(long long)arg1 andDownloadProgress:(double)arg2 ;
-(id)_accessibilityCustomActionLabelForControlStatus:(long long)arg1 ;
-(void)_accessibilitySetCustomActionLabel:(id)arg1 ;
-(id)_accessibilityCustomActionLabel;
@end

