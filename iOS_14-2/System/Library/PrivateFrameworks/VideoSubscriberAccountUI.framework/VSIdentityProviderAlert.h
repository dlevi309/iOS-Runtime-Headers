/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setActions:(NSArray *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSArray *)actions;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

