/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@protocol SLComposeSheetConfigurationItemObserving;
@class NSString;

@interface SLComposeSheetConfigurationItem : NSObject {

	id<SLComposeSheetConfigurationItemObserving> _changeObserver;
	BOOL _valuePending;
	NSString* _title;
	NSString* _value;
	/*^block*/id _tapHandler;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * value;                 //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL valuePending;              //@synthesize valuePending=_valuePending - In the implementation block
@property (nonatomic,copy) id tapHandler;                    //@synthesize tapHandler=_tapHandler - In the implementation block
-(id)init;
-(id)tapHandler;
-(void)setTitle:(NSString *)arg1 ;
-(id)changeObserver;
-(void)setValue:(NSString *)arg1 ;
-(void)setTapHandler:(id)arg1 ;
-(void)setChangeObserver:(id)arg1 ;
-(NSString *)value;
-(NSString *)title;
-(void)setValuePending:(BOOL)arg1 ;
-(BOOL)valuePending;
@end

