/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITextPosition *)position;
-(id)description;
-(NSAttributedString *)string;
@end

