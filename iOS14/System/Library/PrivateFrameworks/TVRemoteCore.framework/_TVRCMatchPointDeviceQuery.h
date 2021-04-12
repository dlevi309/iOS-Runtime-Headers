/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <libobjc.A.dylib/HMHomeManagerDelegatePrivate.h>

@protocol _TVRCMatchPointDeviceQueryDelegate, NSObject;
@class HMHomeManager, NSMutableDictionary, NSString;

@interface _TVRCMatchPointDeviceQuery : NSObject <HMHomeManagerDelegatePrivate> {

	id<_TVRCMatchPointDeviceQueryDelegate> _delegate;
	HMHomeManager* _homeManager;
	id<NSObject> _homekitActiveAssertion;
	NSMutableDictionary* _wrapperToIdentifierMapping;

}

@property (nonatomic,retain) HMHomeManager * homeManager;                                         //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) id<NSObject> homekitActiveAssertion;                                 //@synthesize homekitActiveAssertion=_homekitActiveAssertion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * wrapperToIdentifierMapping;                    //@synthesize wrapperToIdentifierMapping=_wrapperToIdentifierMapping - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRCMatchPointDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<_TVRCMatchPointDeviceQueryDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)homeManagerDidUpdateCurrentHome:(id)arg1 ;
-(void)setDelegate:(id<_TVRCMatchPointDeviceQueryDelegate>)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(void)dealloc;
-(void)_matchPointServiceAdded:(id)arg1 ;
-(void)_matchPointServiceRemoved:(id)arg1 ;
-(void)_matchPointServiceNameChanged:(id)arg1 ;
-(void)_notifyAddedService:(id)arg1 ;
-(void)_notifyRemovedService:(id)arg1 ;
-(id<NSObject>)homekitActiveAssertion;
-(void)setHomekitActiveAssertion:(id<NSObject>)arg1 ;
-(NSMutableDictionary *)wrapperToIdentifierMapping;
-(void)setWrapperToIdentifierMapping:(NSMutableDictionary *)arg1 ;
@end

