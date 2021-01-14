/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextFieldEditingToken.h>

@protocol _UITextFieldEditingToken <NSObject>
@required
-(BOOL)endEditing;

@end


@class _UICascadingTextStorage, NSArray, NSString;

@interface _UITextFieldEditingToken : NSObject <_UITextFieldEditingToken> {

	SCD_Struct_UI62 _flags;
	_UICascadingTextStorage* _textStorage;
	NSArray* _attributeNames;

}

@property (assign,nonatomic) BOOL restoreTextAttributes; 
@property (assign,nonatomic) BOOL restoreDefaultAttributes; 
@property (nonatomic,__weak,readonly) _UICascadingTextStorage * textStorage;              //@synthesize textStorage=_textStorage - In the implementation block
@property (nonatomic,readonly) NSArray * attributeNames;                                  //@synthesize attributeNames=_attributeNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRestoreTextAttributes:(BOOL)arg1 ;
-(id)initWithTextStorage:(id)arg1 attributeNames:(id)arg2 ;
-(void)setRestoreDefaultAttributes:(BOOL)arg1 ;
-(BOOL)restoreTextAttributes;
-(BOOL)restoreDefaultAttributes;
-(NSArray *)attributeNames;
-(BOOL)endEditing;
-(_UICascadingTextStorage *)textStorage;
@end

