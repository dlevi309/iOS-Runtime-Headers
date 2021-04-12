/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSAlert.h>
@class NSString, NSArray;


@protocol VSJSAlert <JSExport>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSArray * actions; 
@required
-(id)init;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(NSString *)message;
-(void)setMessage:(id)arg1;
-(NSArray *)actions;
-(void)setActions:(id)arg1;

@end


@class NSString, NSArray;

@interface VSJSAlert : IKJSObject <VSJSAlert> {

	NSString* _title;
	NSString* _message;
	NSArray* _actions;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSArray * actions;               //@synthesize actions=_actions - In the implementation block
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
@end

