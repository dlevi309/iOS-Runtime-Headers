/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/


@interface TKDisplayLinkManagerObserver : NSObject {

	/*^block*/id _block;
	unsigned long long _frameInterval;
	unsigned long long _displayDidRefreshCount;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)displayDidRefresh:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 frameInterval:(unsigned long long)arg2 ;
@end

