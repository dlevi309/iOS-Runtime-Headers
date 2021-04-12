/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/


@class NSURL, NSString, UIAlertController;

@interface MSRadarInteraction : NSObject {

	NSURL* _radarURL;
	NSString* _title;
	NSString* _message;
	NSString* _openButtonTitle;
	/*^block*/id _openHandler;
	NSString* _cancelButtonTitle;
	/*^block*/id _cancelHandler;
	NSString* _maybeLaterButtonTitle;
	/*^block*/id _maybeLaterHandler;

}

@property (nonatomic,readonly) NSURL * radarURL;                                           //@synthesize radarURL=_radarURL - In the implementation block
@property (nonatomic,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * message;                                         //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * openButtonTitle;                                     //@synthesize openButtonTitle=_openButtonTitle - In the implementation block
@property (nonatomic,copy) id openHandler;                                                 //@synthesize openHandler=_openHandler - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;                                   //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                               //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,copy) NSString * maybeLaterButtonTitle;                               //@synthesize maybeLaterButtonTitle=_maybeLaterButtonTitle - In the implementation block
@property (nonatomic,copy) id maybeLaterHandler;                                           //@synthesize maybeLaterHandler=_maybeLaterHandler - In the implementation block
@property (nonatomic,readonly) UIAlertController * interactionViewController; 
+(id)interactionWithTitle:(id)arg1 message:(id)arg2 radarURL:(id)arg3 ;
+(id)interactionWithTitle:(id)arg1 message:(id)arg2 builder:(/*^block*/id)arg3 ;
-(NSString *)title;
-(NSString *)message;
-(id)cancelHandler;
-(void)setCancelHandler:(id)arg1 ;
-(NSString *)openButtonTitle;
-(void)setOpenButtonTitle:(NSString *)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(id)initWithTitle:(id)arg1 message:(id)arg2 radarURL:(id)arg3 ;
-(NSURL *)radarURL;
-(id)openHandler;
-(NSString *)maybeLaterButtonTitle;
-(id)maybeLaterHandler;
-(UIAlertController *)interactionViewController;
-(void)setOpenHandler:(id)arg1 ;
-(void)setMaybeLaterButtonTitle:(NSString *)arg1 ;
-(void)setMaybeLaterHandler:(id)arg1 ;
@end

