/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class NSString, NSNumber;

@interface IDSSignInControllerAccountDescription : NSObject {

	NSString* _serviceName;
	NSNumber* _state;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSNumber * state;                    //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id completion;                         //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setState:(NSNumber *)arg1 ;
-(NSString *)serviceName;
-(NSNumber *)state;
-(void)setServiceName:(NSString *)arg1 ;
@end

