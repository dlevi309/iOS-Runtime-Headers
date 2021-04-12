/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/


@protocol DNDSStateProviderDataSource;
@class DNDState;

@interface DNDSStateProvider : NSObject {

	DNDState* _lastCalculatedState;
	id<DNDSStateProviderDataSource> _dataSource;

}

@property (copy) DNDState * lastCalculatedState;                                             //@synthesize lastCalculatedState=_lastCalculatedState - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSStateProviderDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<DNDSStateProviderDataSource>)dataSource;
-(void)setDataSource:(id<DNDSStateProviderDataSource>)arg1 ;
-(void)setLastCalculatedState:(DNDState *)arg1 ;
-(void)recalculateState;
-(DNDState *)lastCalculatedState;
@end

