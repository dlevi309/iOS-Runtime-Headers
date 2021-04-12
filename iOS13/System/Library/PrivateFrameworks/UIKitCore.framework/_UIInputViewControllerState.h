/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIDocumentState, TITextInputTraits, UITextInputMode, NSUUID;

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _needsInputModeSwitchKey;
	TIDocumentState* _documentState;
	TITextInputTraits* _textInputTraits;
	UITextInputMode* _documentInputMode;
	NSUUID* _documentIdentifier;

}

@property (nonatomic,retain) TIDocumentState * documentState;                  //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,retain) TITextInputTraits * textInputTraits;              //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,retain) UITextInputMode * documentInputMode;              //@synthesize documentInputMode=_documentInputMode - In the implementation block
@property (nonatomic,copy) NSUUID * documentIdentifier;                        //@synthesize documentIdentifier=_documentIdentifier - In the implementation block
@property (assign,nonatomic) BOOL needsInputModeSwitchKey;                     //@synthesize needsInputModeSwitchKey=_needsInputModeSwitchKey - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stateForKeyboardState:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TITextInputTraits *)textInputTraits;
-(TIDocumentState *)documentState;
-(void)setDocumentInputMode:(UITextInputMode *)arg1 ;
-(UITextInputMode *)documentInputMode;
-(BOOL)needsInputModeSwitchKey;
-(void)createDocumentStateIfNecessary;
-(void)setDocumentState:(TIDocumentState *)arg1 ;
-(NSUUID *)documentIdentifier;
-(void)setTextInputTraits:(TITextInputTraits *)arg1 ;
-(void)setDocumentIdentifier:(NSUUID *)arg1 ;
-(void)setNeedsInputModeSwitchKey:(BOOL)arg1 ;
@end

