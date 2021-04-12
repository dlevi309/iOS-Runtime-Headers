/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILabelContent.h>

@class NSString;

@interface _UILabelStringContent : _UILabelContent {

	NSString* _string;
	SCD_Struct_UI30 _flags;

}
-(id)string;
-(long long)length;
-(unsigned long long)hash;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(id)attributedString;
-(BOOL)isWidthVariant;
-(BOOL)isAttributed;
-(id)attributedStringContent;
-(id)defaultValueForAttribute:(id)arg1 ;
-(BOOL)isNil;
-(id)initWithString:(id)arg1 defaultAttributesProvider:(id)arg2 ;
-(BOOL)_isContentEqualToContent:(id)arg1 ;
@end

