/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/


@interface TKDisplayLinkManagerObserver : NSObject {

	/*^block*/id _block;
	unsigned long long _frameInterval;
	unsigned long long _displayDidRefreshCount;

}
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)displayDidRefresh:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 frameInterval:(unsigned long long)arg2 ;
@end

