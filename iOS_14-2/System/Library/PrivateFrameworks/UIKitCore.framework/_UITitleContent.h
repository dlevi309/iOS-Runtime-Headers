/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)width;
-(void)updateWithTitleAttributes:(id)arg1 button:(id)arg2 ;
-(id)description;
-(NSString *)title;
-(void)updateWithButton:(id)arg1 ;
@end

