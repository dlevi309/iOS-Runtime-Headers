/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSString;

@interface MTInterprocessChangeNotifier : NSObject {

	NSString* _identifier;
	int _token;

}
-(void)dealloc;
-(void)stop;
-(void)notify;
-(id)initWithIdentifier:(id)arg1 onChange:(/*^block*/id)arg2 ;
@end

