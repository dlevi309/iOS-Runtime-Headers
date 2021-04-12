/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HMFoundation/HMFOperation.h>

@class HMHomeManager;

@interface __HMHomeDataSyncOperation : HMFOperation {

	BOOL _refresh;
	HMHomeManager* _manager;

}

@property (__weak,readonly) HMHomeManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (getter=isRefresh) BOOL refresh;                        //@synthesize refresh=_refresh - In the implementation block
-(void)setRefresh:(BOOL)arg1 ;
-(void)main;
-(id)initWithHomeManager:(id)arg1 ;
-(HMHomeManager *)manager;
-(BOOL)isRefresh;
-(id)initWithHomeManager:(id)arg1 timeout:(double)arg2 ;
@end

