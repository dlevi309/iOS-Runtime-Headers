/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@class NSString;

@interface SBLockScreenElementOverride : NSObject {

	BOOL _hidden;
	long long _element;
	NSString* _text;

}

@property (assign,nonatomic) long long element;                        //@synthesize element=_element - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;              //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
+(id)overrideForElement:(long long)arg1 ;
+(id)overrideForHiddenElement:(long long)arg1 ;
-(id)description;
-(long long)element;
-(BOOL)isHidden;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setElement:(long long)arg1 ;
@end

