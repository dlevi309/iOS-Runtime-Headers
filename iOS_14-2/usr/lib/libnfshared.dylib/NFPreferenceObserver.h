/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/


@interface NFPreferenceObserver : NSObject {

	/*^block*/id _callback;

}

@property (copy) id callback;              //@synthesize callback=_callback - In the implementation block
-(id)callback;
-(void)start:(/*^block*/id)arg1 ;
-(void)setCallback:(id)arg1 ;
-(void)stop;
-(void)handlePreferencesOrProfileChanged;
-(void)dealloc;
@end

