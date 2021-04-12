/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue;
@class SFService, NSString, NSArray, NSObject;

@interface RPAppSignInService : NSObject {

	BOOL _activateCalled;
	SFService* _bleAdvertiser;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	unsigned _flags;
	NSString* _appName;
	NSString* _appBundleID;
	NSArray* _associatedDomains;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,copy) NSString * appName;                                        //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * appBundleID;                                    //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,copy) NSArray * associatedDomains;                               //@synthesize associatedDomains=_associatedDomains - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
-(id)init;
-(id)description;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(unsigned)flags;
-(NSString *)appBundleID;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)_invalidated;
-(void)activate;
-(NSArray *)associatedDomains;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(void)setAppBundleID:(NSString *)arg1 ;
@end

