/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol CLKComplicationDataSource;
@class CLKCComplicationDataSource, CLKComplication;

@interface NTKTimelineDataOperation : NSObject {

	CLKCComplicationDataSource* _localDataSource;
	id<CLKComplicationDataSource> _remoteDataSource;
	CLKComplication* _remoteComplication;
	BOOL _started;
	BOOL _canceled;

}

@property (nonatomic,readonly) BOOL started;               //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) BOOL canceled;              //@synthesize canceled=_canceled - In the implementation block
+(id)operationWithLocalDataSource:(id)arg1 ;
+(id)operationWithRemoteDataSource:(id)arg1 complication:(id)arg2 ;
-(void)cancel;
-(void)start;
-(BOOL)canceled;
-(void)_start;
-(BOOL)started;
-(void)_cancel;
-(BOOL)_validateEntry:(id)arg1 ;
-(BOOL)_validateTemplate:(id)arg1 ;
-(id)_finalizedValidEntries:(id)arg1 ;
@end

