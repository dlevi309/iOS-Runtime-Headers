/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSAlertAction.h>
@class NSString, JSValue;


@protocol VSJSAlertAction <JSExport>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * style; 
@property (nonatomic,retain) JSValue * callback; 
@required
-(JSValue *)callback;
-(void)setCallback:(id)arg1;
-(id)init;
-(void)setTitle:(id)arg1;
-(void)setStyle:(id)arg1;
-(NSString *)style;
-(NSString *)title;

@end


@class NSString, JSValue;

@interface VSJSAlertAction : IKJSObject <VSJSAlertAction> {

	NSString* _title;
	NSString* _style;
	JSValue* _callback;

}

@property (nonatomic,copy) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * style;                  //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) JSValue * callback;              //@synthesize callback=_callback - In the implementation block
-(JSValue *)callback;
-(void)setCallback:(JSValue *)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStyle:(NSString *)arg1 ;
-(NSString *)style;
-(NSString *)title;
@end

