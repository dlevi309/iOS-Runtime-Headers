/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

