/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


@class FBSSystemService;

@interface BKSSystemService : NSObject {

	FBSSystemService* _fbsSystemService;

}
-(id)init;
-(unsigned)createClientPort;
-(BOOL)canOpenApplication:(id)arg1 reason:(int*)arg2 ;
-(void)openApplication:(id)arg1 options:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned)arg3 withResult:(/*^block*/id)arg4 ;
-(void)cleanupClientPort:(unsigned)arg1 ;
-(int)pidForApplication:(id)arg1 ;
-(void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 ;
-(void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 ;
-(id)systemApplicationBundleIdentifier;
-(void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned)arg4 withResult:(/*^block*/id)arg5 ;
@end

