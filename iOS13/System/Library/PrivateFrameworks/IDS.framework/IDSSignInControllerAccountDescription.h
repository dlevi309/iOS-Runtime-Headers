/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)state;
-(NSString *)serviceName;
-(void)setState:(NSNumber *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setServiceName:(NSString *)arg1 ;
@end

