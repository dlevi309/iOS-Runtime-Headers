/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface ADRemoteSigningService : NSObject {

	BOOL _didLeaveGroup;
	NSObject*<OS_dispatch_queue> _signingQueue;
	NSObject*<OS_dispatch_group> _signingGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> signingQueue;              //@synthesize signingQueue=_signingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> signingGroup;              //@synthesize signingGroup=_signingGroup - In the implementation block
@property (assign,nonatomic) BOOL didLeaveGroup;                                     //@synthesize didLeaveGroup=_didLeaveGroup - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)signedCredentialForRequest:(id)arg1 withPersistence:(unsigned long long)arg2 ;
-(id)signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 withPersistence:(unsigned long long)arg3 ;
-(void)setDidLeaveGroup:(BOOL)arg1 ;
-(BOOL)didLeaveGroup;
-(NSObject*<OS_dispatch_queue>)signingQueue;
-(void)setSigningQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_group>)signingGroup;
-(void)setSigningGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

