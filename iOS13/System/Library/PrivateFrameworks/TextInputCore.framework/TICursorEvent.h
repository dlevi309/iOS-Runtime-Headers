/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIUserAction.h>

@class NSString;

@interface TICursorEvent : TIUserAction {

	BOOL _isSelection;
	BOOL _extendsPriorWord;
	NSString* _inWord;
	unsigned long long _selectionLocation;
	NSRange _inWordRange;

}

@property (assign,nonatomic) BOOL isSelection;                                  //@synthesize isSelection=_isSelection - In the implementation block
@property (assign,nonatomic) BOOL extendsPriorWord;                             //@synthesize extendsPriorWord=_extendsPriorWord - In the implementation block
@property (nonatomic,copy) NSString * inWord;                                   //@synthesize inWord=_inWord - In the implementation block
@property (assign,nonatomic) NSRange inWordRange;                               //@synthesize inWordRange=_inWordRange - In the implementation block
@property (assign,nonatomic) unsigned long long selectionLocation;              //@synthesize selectionLocation=_selectionLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTIKeyboardState:(id)arg1 ;
-(BOOL)isSelection;
-(void)setIsSelection:(BOOL)arg1 ;
-(BOOL)extendsPriorWord;
-(void)setExtendsPriorWord:(BOOL)arg1 ;
-(NSString *)inWord;
-(void)setInWord:(NSString *)arg1 ;
-(NSRange)inWordRange;
-(void)setInWordRange:(NSRange)arg1 ;
-(unsigned long long)selectionLocation;
-(void)setSelectionLocation:(unsigned long long)arg1 ;
@end

