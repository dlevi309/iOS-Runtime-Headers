/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2AccessoryServerCoordinatorPrivate;
@class NSError;

@interface HAP2AccessoryServerBrowserCoordinatorInfo : NSObject {

	id<HAP2AccessoryServerCoordinatorPrivate> _coordinator;
	NSError* _error;

}

@property (nonatomic,readonly) id<HAP2AccessoryServerCoordinatorPrivate> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) NSError * error;                                                      //@synthesize error=_error - In the implementation block
-(void)setError:(NSError *)arg1 ;
-(id)initWithCoordinator:(id)arg1 ;
-(NSError *)error;
-(id<HAP2AccessoryServerCoordinatorPrivate>)coordinator;
@end

