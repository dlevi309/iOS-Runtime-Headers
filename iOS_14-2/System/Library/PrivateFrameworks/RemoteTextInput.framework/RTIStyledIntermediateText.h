/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSAttributedString *)displayString;
-(void)encodeWithCoder:(id)arg1 ;
-(NSRange)selectedRange;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)inputString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4 ;
-(long long)cursorVisibility;
-(void)setCursorVisibility:(long long)arg1 ;
@end

