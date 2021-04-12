/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@interface TUShineImageFactory : NSObject {

	 lruCache;
	 lock;
	 inflightRequests;

}
+(id)shared;
-(id)init;
-(void)didReceiveMemoryWarning;
-(void)shineImageForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)syncShineImageForRequest:(id)arg1 ;
@end

