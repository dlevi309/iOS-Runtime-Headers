/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(BOOL)started;
-(BOOL)canceled;
-(void)_start;
-(void)_cancel;
-(void)cancel;
-(BOOL)_validateEntry:(id)arg1 ;
-(BOOL)_validateTemplate:(id)arg1 ;
-(id)_finalizedValidEntries:(id)arg1 ;
@end

