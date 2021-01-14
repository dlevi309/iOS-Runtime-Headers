/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setActions:(id)arg1;
-(void)setMessage:(id)arg1;
-(NSString *)message;
-(id)init;
-(NSArray *)actions;
-(void)setTitle:(id)arg1;
-(NSString *)title;

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
-(void)setActions:(NSArray *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(id)init;
-(NSArray *)actions;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

