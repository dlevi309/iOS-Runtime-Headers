/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@interface IDSAutoCleanup : NSObject {

	/*^block*/id _cleanupBlock;
	int _accessCount;

}
-(void)incrementAccessCount;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

