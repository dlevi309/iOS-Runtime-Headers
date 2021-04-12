/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSAttributedString, NSString;

@interface _UITitleContent : NSObject {

	NSAttributedString* _attributedText;
	double _width;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) double width;                       //@synthesize width=_width - In the implementation block
+(id)contentWithTitle:(id)arg1 attributes:(id)arg2 button:(id)arg3 ;
-(id)description;
-(NSString *)title;
-(double)width;
-(void)updateWithButton:(id)arg1 ;
-(void)updateWithTitleAttributes:(id)arg1 button:(id)arg2 ;
@end

