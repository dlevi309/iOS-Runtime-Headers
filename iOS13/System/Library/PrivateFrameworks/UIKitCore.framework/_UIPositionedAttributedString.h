/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSAttributedString, UITextPosition;

@interface _UIPositionedAttributedString : NSObject {

	NSAttributedString* _string;
	UITextPosition* _position;

}

@property (nonatomic,copy,readonly) NSAttributedString * string;              //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) UITextPosition * position;                     //@synthesize position=_position - In the implementation block
+(id)attributedString:(id)arg1 atPosition:(id)arg2 ;
-(NSAttributedString *)string;
-(id)description;
-(UITextPosition *)position;
@end

