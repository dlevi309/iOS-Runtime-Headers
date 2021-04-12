/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UILabelContentAttributesProvider;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UILabelContent : NSObject {

	id<_UILabelContentAttributesProvider> _defaultAttributesProvider;

}
+(id)emptyContentWithDefaultAttributesProvider:(id)arg1 ;
-(id)string;
-(long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(id)attributedString;
-(BOOL)isWidthVariant;
-(id)widthVariantContentForView:(id)arg1 ;
-(id)contentWithAttributedString:(id)arg1 ;
-(BOOL)isAttributed;
-(id)contentWithString:(id)arg1 ;
-(id)attributedStringContent;
-(BOOL)isAttribute:(id)arg1 uniformlyEqualToValue:(id)arg2 ;
-(id)contentByApplyingAttributeToEntireRange:(id)arg1 value:(id)arg2 ;
-(id)defaultValueForAttribute:(id)arg1 ;
-(id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(NSRange)arg3 ;
-(BOOL)isNil;
-(id)initWithDefaultAttributesProvider:(id)arg1 ;
-(id)_defaultAttributesForString:(id)arg1 ;
-(BOOL)_isContentEqualToContent:(id)arg1 ;
-(void)_mergeDefaultAttributes:(id)arg1 ;
@end

