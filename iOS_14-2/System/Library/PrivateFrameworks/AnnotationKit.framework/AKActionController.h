/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@class AKController;

@interface AKActionController : NSObject {

	AKController* _controller;

}

@property (__weak) AKController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)setController:(AKController *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(AKController *)controller;
-(void)performActionForSender:(id)arg1 ;
-(BOOL)validateSender:(id)arg1 ;
-(void)performActionForSender:(id)arg1 segment:(long long)arg2 ;
-(BOOL)_isSenderEnabled:(id)arg1 segment:(long long)arg2 ;
-(BOOL)validateSender:(id)arg1 segment:(long long)arg2 ;
-(BOOL)isSenderEnabled:(id)arg1 ;
@end

