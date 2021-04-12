/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/

#import <RemoteTextInput/RemoteTextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSAttributedString;

@interface RTIStyledIntermediateText : NSObject <NSSecureCoding> {

	unsigned long long _selectionOffset;
	NSString* _inputString;
	NSAttributedString* _displayString;
	NSString* _searchString;
	long long _cursorVisibility;

}

@property (nonatomic,readonly) NSString * inputString;                          //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,readonly) NSAttributedString * displayString;              //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,readonly) NSRange selectedRange; 
@property (nonatomic,readonly) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) long long cursorVisibility;                        //@synthesize cursorVisibility=_cursorVisibility - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 ;
+(id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 ;
+(id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)selectedRange;
-(NSAttributedString *)displayString;
-(NSString *)inputString;
-(NSString *)searchString;
-(id)initWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4 ;
-(long long)cursorVisibility;
-(void)setCursorVisibility:(long long)arg1 ;
@end

