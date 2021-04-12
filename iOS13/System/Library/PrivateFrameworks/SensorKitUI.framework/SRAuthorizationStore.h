/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <libobjc.A.dylib/SRAuthorizationStore.h>
@class NSDictionary;


@protocol SRAuthorizationStore <NSObject>
@property (copy,readonly) NSDictionary * authorizationValues; 
@property (copy,readonly) NSDictionary * lastModifiedAuthorizationTimes; 
@required
-(void)addDelegate:(id)arg1;
-(void)removeDelegate:(id)arg1;
-(NSDictionary *)authorizationValues;
-(BOOL)serviceAuthorized:(id)arg1 forBundleId:(id)arg2;
-(BOOL)serviceAuthorized:(id)arg1;
-(NSDictionary *)lastModifiedAuthorizationTimes;

@end


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSHashTable, NSString;

@interface SRAuthorizationStore : NSObject <SRAuthorizationStore> {

	int _notifyToken;
	NSDictionary* _authorizationValues;
	NSDictionary* _lastModifiedAuthorizationTimes;
	NSObject*<OS_dispatch_queue> _updateQueue;
	NSHashTable* _delegates;

}

@property (copy) NSDictionary * authorizationValues;                                //@synthesize authorizationValues=_authorizationValues - In the implementation block
@property (copy) NSDictionary * lastModifiedAuthorizationTimes;                     //@synthesize lastModifiedAuthorizationTimes=_lastModifiedAuthorizationTimes - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> updateQueue;              //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                               //@synthesize delegates=_delegates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)defaultStore;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)updateQueue;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(void)setUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)startUpdatingAuthorizations;
-(void)setAuthorizationValues:(NSDictionary *)arg1 ;
-(void)setLastModifiedAuthorizationTimes:(NSDictionary *)arg1 ;
-(void)updateAuthorizations;
-(NSDictionary *)authorizationValues;
-(void)updateLastModifiedTimes;
-(BOOL)serviceAuthorized:(id)arg1 forBundleId:(id)arg2 ;
-(BOOL)serviceAuthorized:(id)arg1 ;
-(NSDictionary *)lastModifiedAuthorizationTimes;
@end

