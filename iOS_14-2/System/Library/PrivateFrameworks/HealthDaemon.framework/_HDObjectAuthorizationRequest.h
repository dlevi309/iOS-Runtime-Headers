/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSUUID, NSArray;

@interface _HDObjectAuthorizationRequest : NSObject {

	/*^block*/id _completion;
	NSUUID* _identifier;
	NSArray* _samples;
	NSArray* _authorizationRecords;

}

@property (nonatomic,copy) id completion;                                                 //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * samples;                                    //@synthesize samples=_samples - In the implementation block
@property (nonatomic,copy,readonly) NSArray * samplesRequiringAuthorization; 
@property (nonatomic,retain) NSArray * authorizationRecords;                              //@synthesize authorizationRecords=_authorizationRecords - In the implementation block
-(NSArray *)samples;
-(void)setCompletion:(id)arg1 ;
-(NSArray *)samplesRequiringAuthorization;
-(NSArray *)authorizationRecords;
-(id)completion;
-(NSUUID *)identifier;
-(id)initForSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAuthorizationRecords:(NSArray *)arg1 ;
-(void)invokeCompletionWithSuccess:(BOOL)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id)arg4 ;
-(void)invokeCompletionHandlerWithAuthorizedSamples:(id)arg1 error:(id)arg2 ;
@end

