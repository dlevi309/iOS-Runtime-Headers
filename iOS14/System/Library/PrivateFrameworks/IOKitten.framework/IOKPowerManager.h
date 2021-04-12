/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
*/


@interface IOKPowerManager : NSObject {

	unsigned _connection;

}
+(id)powerManager;
+(BOOL)isSleepEnabled;
-(id)init;
-(void)dealloc;
-(BOOL)sleepSystemWithError:(id*)arg1 ;
@end

