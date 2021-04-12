/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/


@class NSMutableArray, UIViewController, NSString;

@interface CDPRemoteValidationEscapeOffer : NSObject {

	NSMutableArray* _escapeOptions;
	UIViewController* _presentingViewController;
	NSString* _escapeOfferName;
	NSString* _title;
	NSString* _message;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) NSString * escapeOfferName;                                      //@synthesize escapeOfferName=_escapeOfferName - In the implementation block
@property (nonatomic,retain) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                                              //@synthesize message=_message - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(NSString *)title;
-(void)handleEscapeAction:(id)arg1 ;
-(void)setEscapeOfferName:(NSString *)arg1 ;
-(void)addEscapeOptionsObject:(id)arg1 ;
-(id)escapeOptions;
-(NSString *)escapeOfferName;
-(id)_actionFromEscapeOption:(id)arg1 ;
-(long long)_styleForEscapeOption:(id)arg1 ;
-(void)dismissOfferAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

