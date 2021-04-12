/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPSmartField.h>

@class NSString;

@interface TSWPRubyField : TSWPSmartField {

	NSString* _rubyText;

}

@property (nonatomic,copy) NSString * rubyText;                  //@synthesize rubyText=_rubyText - In the implementation block
@property (nonatomic,readonly) NSString * baseText; 
@property (nonatomic,readonly) int baseTextScript; 
-(void)dealloc;
-(id)text;
-(int)elementKind;
-(BOOL)allowsEditing;
-(id)copyWithContext:(id)arg1 ;
-(unsigned)attributeArrayKind;
-(int)styleAttributeArrayKind;
-(NSString *)rubyText;
-(int)baseTextScript;
-(BOOL)canCopy:(NSRange)arg1 ;
-(void)setRubyText:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 rubyText:(id)arg2 ;
-(NSString *)baseText;
@end

