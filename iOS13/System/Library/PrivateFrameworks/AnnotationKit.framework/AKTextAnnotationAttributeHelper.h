/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@interface AKTextAnnotationAttributeHelper : NSObject
+(id)actualOrPlaceholderTextOfAnnotation:(id)arg1 ;
+(id)newTextStorageOriginalFontSavvyWithString:(id)arg1 attributes:(id)arg2 ;
+(id)typingAttributes:(id)arg1 byApplyingScaleFactor:(double)arg2 ;
+(id)newTextStorage:(id)arg1 byApplyingScaleFactor:(double)arg2 ;
+(void)enumerateFontAttributesOfAttributedString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)font:(id)arg1 byApplyingScaleFactor:(double)arg2 ;
+(id)newTextStorageOriginalFontSavvyWithAttributedString:(id)arg1 ;
+(id)placeholderTextOfAnnotation:(id)arg1 ;
+(void)resolvedAlignmentAndDirection:(id)arg1 locale:(id)arg2 alignment:(long long*)arg3 direction:(long long*)arg4 ;
+(id)fontsOfAnnotations:(id)arg1 ;
+(id)fontsOfEditor:(id)arg1 ;
+(void)setFont:(id)arg1 ofAnnotation:(id)arg2 ;
+(void)setTextAlignment:(long long)arg1 ofAnnotation:(id)arg2 ;
+(id)textAttributesOfAnnotations:(id)arg1 ;
+(id)textAttributesOfEditor:(id)arg1 ;
+(void)setTextAttributes:(id)arg1 ofAnnotation:(id)arg2 ;
+(void)adjustBoundsOfAnnotation:(id)arg1 toFitOptionalText:(id)arg2 onPageController:(id)arg3 ;
+(void)adjustAnnotationBoundsToFitText:(id)arg1 ;
@end

