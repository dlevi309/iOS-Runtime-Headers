/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/


@protocol DNDSSyncService <NSObject>
@property (assign,nonatomic,__weak) id<DNDSSyncServiceDelegate> delegate; 
@required
-(id<DNDSSyncServiceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)resume;
-(void)sendMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;

@end

