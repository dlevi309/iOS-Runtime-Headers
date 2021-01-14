/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TPNumberPadButtonProtocol.h>

@class NSString;

@interface SBEmptyButtonView : UIView <TPNumberPadButtonProtocol> {

	long long _char;

}

@property (assign) long long character;                             //@synthesize char=_char - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(id)initForCharacter:(long long)arg1 ;
-(void)setCharacter:(long long)arg1 ;
-(long long)character;
@end

