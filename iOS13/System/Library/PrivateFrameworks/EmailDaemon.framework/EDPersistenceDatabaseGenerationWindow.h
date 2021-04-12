/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@interface EDPersistenceDatabaseGenerationWindow : NSObject {

	long long _earliestGeneration;
	long long _latestGeneration;

}

@property (nonatomic,readonly) long long earliestGeneration;              //@synthesize earliestGeneration=_earliestGeneration - In the implementation block
@property (nonatomic,readonly) long long latestGeneration;                //@synthesize latestGeneration=_latestGeneration - In the implementation block
-(id)init;
-(void)insertGeneration:(long long)arg1 ;
-(long long)earliestGeneration;
-(long long)latestGeneration;
@end

