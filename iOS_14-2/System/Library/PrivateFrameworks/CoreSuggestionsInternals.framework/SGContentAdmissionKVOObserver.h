/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSString;

@interface SGContentAdmissionKVOObserver : NSObject {

	NSString* _key;
	/*^block*/id _handler;

}
+(id)observeObject:(id)arg1 key:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithKey:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

