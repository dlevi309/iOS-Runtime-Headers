/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSString;

@interface MTInterprocessChangeNotifier : NSObject {

	NSString* _identifier;
	int _token;

}
+(void)notify:(id)arg1 ;
+(id)fullIdentifier:(id)arg1 ;
-(void)stop;
-(void)notify;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 onChange:(/*^block*/id)arg2 ;
@end

