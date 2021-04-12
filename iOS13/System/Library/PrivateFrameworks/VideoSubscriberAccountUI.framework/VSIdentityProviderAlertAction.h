/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

