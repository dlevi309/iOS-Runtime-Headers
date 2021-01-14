/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIKeyboardInteractionProtocolBase.h>
#import <libobjc.A.dylib/TIKeyboardInteractionProtocolEvent.h>

@class TIDocumentState, NSString;

@interface TIKeyboardInteractionProtocolEventContextDidChange : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {

	TIDocumentState* _documentState;
	BOOL _wordDelete;
	BOOL _cursorMoved;
	BOOL _extendsPriorWord;
	NSString* _word;
	NSRange _inWordRange;
	unsigned long long _selectionLocation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)sendTo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContext:(id)arg1 wordDelete:(BOOL)arg2 cursorMoved:(BOOL)arg3 extendsPriorWord:(BOOL)arg4 inWord:(id)arg5 range:(NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8 ;
@end

