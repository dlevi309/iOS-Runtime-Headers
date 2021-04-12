/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(NSString *)style;
-(void)setStyle:(id)arg1;
-(JSValue *)callback;
-(void)setCallback:(id)arg1;

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
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(JSValue *)callback;
-(void)setCallback:(JSValue *)arg1 ;
@end

