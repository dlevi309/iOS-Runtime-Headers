/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
*/


@interface AAUploadBatchEventConfig : NSObject {

	 maxEventsPerSessionBatch;
	 maxByteSizePerSessionBatch;
	 debuggingEnabled;
	 maxUploadTries;

}

@property (readonly,nonatomic) long long maxEventsPerSessionBatch; 
@property (readonly,nonatomic) long long maxByteSizePerSessionBatch; 
@property (readonly,nonatomic) BOOL debuggingEnabled; 
@property (readonly,nonatomic) long long maxUploadTries; 
+(id)default;
-(BOOL)debuggingEnabled;
-(id)init;
-(id)withMaxEventsPerSessionBatch:(long long)arg1 ;
-(long long)maxEventsPerSessionBatch;
-(id)withDebuggingEnabled:(BOOL)arg1 ;
-(id)withMaxByteSizePerSessionBatch:(long long)arg1 ;
-(id)withMaxUploadTries:(long long)arg1 ;
-(long long)maxUploadTries;
-(long long)maxByteSizePerSessionBatch;
-(id)initWithBatchSize:(long long)arg1 enableDebugging:(BOOL)arg2 ;
@end

