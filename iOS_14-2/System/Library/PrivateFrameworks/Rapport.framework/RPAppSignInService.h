/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAppBundleID:(NSString *)arg1 ;
-(void)_invalidate;
-(NSString *)appBundleID;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(unsigned)flags;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSArray *)associatedDomains;
-(void)activate;
-(void)_activate;
-(id)description;
-(void)setFlags:(unsigned)arg1 ;
-(void)_invalidated;
-(void)invalidate;
-(NSString *)appName;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
@end

