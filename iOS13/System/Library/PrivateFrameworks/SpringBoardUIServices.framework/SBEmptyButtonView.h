/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TPNumberPadButtonProtocol.h>

@class NSString;

@interface SBEmptyButtonView : UIView <TPNumberPadButtonProtocol> {

	unsigned _char;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned character;                              //@synthesize char=_char - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initForCharacter:(unsigned)arg1 ;
-(unsigned)character;
-(void)setCharacter:(unsigned)arg1 ;
@end

