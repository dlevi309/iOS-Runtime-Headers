/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/


@interface NFPreferenceObserver : NSObject {

	/*^block*/id _callback;

}

@property (copy) id callback;              //@synthesize callback=_callback - In the implementation block
-(void)dealloc;
-(void)stop;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(void)handlePreferencesOrProfileChanged;
@end

