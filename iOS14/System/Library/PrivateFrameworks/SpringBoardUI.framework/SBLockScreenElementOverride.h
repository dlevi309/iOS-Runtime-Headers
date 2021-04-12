/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(BOOL)isHidden;
-(long long)element;
-(void)setElement:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)description;
-(NSString *)text;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

