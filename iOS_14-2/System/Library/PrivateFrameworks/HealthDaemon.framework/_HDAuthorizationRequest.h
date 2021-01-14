/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSUUID, NSSet;

@interface _HDAuthorizationRequest : NSObject {

	/*^block*/id _completionHandler;
	NSUUID* _identifier;
	NSSet* _typesToWrite;
	NSSet* _typesToRead;

}

@property (nonatomic,readonly) NSUUID * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesToWrite;              //@synthesize typesToWrite=_typesToWrite - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesToRead;               //@synthesize typesToRead=_typesToRead - In the implementation block
-(id)description;
-(NSUUID *)identifier;
-(NSSet *)typesToRead;
-(id)initWithIdentifier:(id)arg1 typesToWrite:(id)arg2 typesToRead:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSSet *)typesToWrite;
-(void)invokeCompletionHandlerWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

