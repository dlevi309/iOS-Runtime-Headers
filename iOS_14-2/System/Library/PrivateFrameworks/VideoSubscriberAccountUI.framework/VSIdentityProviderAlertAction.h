/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSString;

@interface VSIdentityProviderAlertAction : NSObject {

	NSString* _title;
	long long _style;
	/*^block*/id _callback;

}

@property (nonatomic,copy) NSString * title;               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id callback;                    //@synthesize callback=_callback - In the implementation block
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(NSString *)title;
@end

