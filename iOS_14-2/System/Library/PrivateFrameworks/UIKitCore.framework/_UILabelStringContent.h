/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILabelContent.h>

@class NSString;

@interface _UILabelStringContent : _UILabelContent {

	NSString* _string;
	SCD_Struct_UI34 _flags;

}
-(BOOL)isEqualToString:(id)arg1 ;
-(id)initWithString:(id)arg1 defaultAttributes:(id)arg2 ;
-(id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(NSRange)arg3 ;
-(id)attributedString;
-(long long)length;
-(BOOL)isNil;
-(unsigned long long)hash;
-(id)attributedStringContent;
-(id)string;
-(BOOL)isAttributed;
-(BOOL)isWidthVariant;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(BOOL)_isContentEqualToContent:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)contentWithAttributedString:(id)arg1 ;
-(id)contentWithString:(id)arg1 ;
@end

