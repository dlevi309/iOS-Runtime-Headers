/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class NSDate, AAURLConfiguration, NSHTTPURLResponse;

@interface AARemoteServerConfigurationCache : NSObject {

	NSDate* _creationDate;
	AAURLConfiguration* _configuration;
	NSHTTPURLResponse* _response;

}

@property (nonatomic,readonly) NSDate * creationDate;                           //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) AAURLConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * response;                    //@synthesize response=_response - In the implementation block
+(id)cacheWithConfiguration:(id)arg1 response:(id)arg2 ;
-(id)init;
-(NSDate *)creationDate;
-(AAURLConfiguration *)configuration;
-(NSHTTPURLResponse *)response;
-(id)initWithConfiguration:(id)arg1 response:(id)arg2 ;
@end

