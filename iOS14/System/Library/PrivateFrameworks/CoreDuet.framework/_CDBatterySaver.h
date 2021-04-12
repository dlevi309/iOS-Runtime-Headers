/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDBatterySaverProtocol.h>

@class NSXPCConnection;

@interface _CDBatterySaver : NSObject <_CDBatterySaverProtocol> {

	NSXPCConnection* _connection;

}
+(id)sharedInstance;
+(id)batterySaver;
-(id)init;
-(long long)setMode:(long long)arg1 ;
-(BOOL)setPowerMode:(long long)arg1 fromSource:(id)arg2 ;
-(long long)getPowerMode;
-(void)dealloc;
-(void)setPowerMode:(long long)arg1 fromSource:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setPowerMode:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)setPowerMode:(long long)arg1 error:(id*)arg2 ;
@end

