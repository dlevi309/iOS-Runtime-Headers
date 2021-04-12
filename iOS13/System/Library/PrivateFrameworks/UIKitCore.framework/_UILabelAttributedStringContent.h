/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILabelContent.h>

@class NSAttributedString;

@interface _UILabelAttributedStringContent : _UILabelContent {

	NSAttributedString* _attributedString;

}
-(id)string;
-(long long)length;
-(unsigned long long)hash;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(id)attributedString;
-(BOOL)isWidthVariant;
-(BOOL)isAttributed;
-(id)contentWithString:(id)arg1 ;
-(id)attributedStringContent;
-(BOOL)isAttribute:(id)arg1 uniformlyEqualToValue:(id)arg2 ;
-(id)contentByApplyingAttributeToEntireRange:(id)arg1 value:(id)arg2 ;
-(id)defaultValueForAttribute:(id)arg1 ;
-(id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(NSRange)arg3 ;
-(BOOL)isNil;
-(id)initWithAttributedString:(id)arg1 defaultAttributesProvider:(id)arg2 ;
-(BOOL)_isContentEqualToContent:(id)arg1 ;
@end

