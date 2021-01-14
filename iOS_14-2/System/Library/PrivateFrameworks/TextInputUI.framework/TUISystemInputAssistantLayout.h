/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/


#import <TextInputUI/TextInputUI-Structs.h>
@interface TUISystemInputAssistantLayout : NSObject {

	BOOL _usesUnifiedButtonBar;

}

@property (assign,nonatomic) BOOL usesUnifiedButtonBar;              //@synthesize usesUnifiedButtonBar=_usesUnifiedButtonBar - In the implementation block
-(void)layoutViewSet:(id)arg1 inBounds:(CGRect)arg2 forAssistantView:(id)arg3 ;
-(void)configureButtonBarsInViewSet:(id)arg1 forApplicationAssistantItem:(id)arg2 withSystemAssistantItem:(id)arg3 withAssistantView:(id)arg4 ;
-(void)setUsesUnifiedButtonBar:(BOOL)arg1 ;
-(id)_buttonBarGroupSetForApplicationAssistantItem:(id)arg1 withSystemInputAssistantItem:(id)arg2 ;
-(BOOL)usesUnifiedButtonBar;
@end

