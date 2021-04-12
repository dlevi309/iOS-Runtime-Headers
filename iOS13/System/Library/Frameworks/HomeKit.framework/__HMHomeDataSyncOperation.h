/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)main;
-(HMHomeManager *)manager;
-(BOOL)isRefresh;
-(id)initWithHomeManager:(id)arg1 ;
-(void)setRefresh:(BOOL)arg1 ;
-(id)initWithHomeManager:(id)arg1 timeout:(double)arg2 ;
@end

