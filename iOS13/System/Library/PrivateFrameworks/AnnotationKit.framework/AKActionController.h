/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@class AKController;

@interface AKActionController : NSObject {

	AKController* _controller;

}

@property (__weak) AKController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)performActionForSender:(id)arg1 ;
-(BOOL)validateSender:(id)arg1 ;
-(void)performActionForSender:(id)arg1 segment:(long long)arg2 ;
-(BOOL)_isSenderEnabled:(id)arg1 segment:(long long)arg2 ;
-(BOOL)validateSender:(id)arg1 segment:(long long)arg2 ;
-(BOOL)isSenderEnabled:(id)arg1 ;
@end

