/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSString, NSArray;

@interface VSIdentityProviderAlert : NSObject {

	NSString* _title;
	NSString* _message;
	NSArray* _actions;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;               //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
@end

