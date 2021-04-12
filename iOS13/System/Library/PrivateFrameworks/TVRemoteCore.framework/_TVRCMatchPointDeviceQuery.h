/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <libobjc.A.dylib/HMHomeManagerDelegatePrivate.h>

@protocol _TVRCMatchPointDeviceQueryDelegate;
@class HMHomeManager, NSMutableDictionary, NSString;

@interface _TVRCMatchPointDeviceQuery : NSObject <HMHomeManagerDelegatePrivate> {

	id<_TVRCMatchPointDeviceQueryDelegate> _delegate;
	HMHomeManager* _homeManager;
	NSMutableDictionary* _wrapperToIdentifierMapping;

}

@property (nonatomic,retain) HMHomeManager * homeManager;                                         //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * wrapperToIdentifierMapping;                    //@synthesize wrapperToIdentifierMapping=_wrapperToIdentifierMapping - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRCMatchPointDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<_TVRCMatchPointDeviceQueryDelegate>)delegate;
-(void)setDelegate:(id<_TVRCMatchPointDeviceQueryDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)homeManagerDidUpdateCurrentHome:(id)arg1 ;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(void)_matchPointServiceAdded:(id)arg1 ;
-(void)_matchPointServiceRemoved:(id)arg1 ;
-(void)_matchPointServiceNameChanged:(id)arg1 ;
-(void)_notifyAddedService:(id)arg1 ;
-(void)_notifyRemovedService:(id)arg1 ;
-(NSMutableDictionary *)wrapperToIdentifierMapping;
-(void)setWrapperToIdentifierMapping:(NSMutableDictionary *)arg1 ;
@end

