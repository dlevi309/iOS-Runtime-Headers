/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@class SDConnectionConfiguration, MDSearchableIndexService;

@interface CSIndexClientConnection : NSObject {

	BOOL _quotaDisabled;
	SDConnectionConfiguration* _configuration;
	MDSearchableIndexService* _service;

}

@property (nonatomic,readonly) SDConnectionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BOOL quotaDisabled;                                     //@synthesize quotaDisabled=_quotaDisabled - In the implementation block
@property (nonatomic,readonly) MDSearchableIndexService * service;                     //@synthesize service=_service - In the implementation block
-(id)initWithConfiguration:(id)arg1 indexer:(id)arg2 ;
-(id)initWithConnection:(id)arg1 indexer:(id)arg2 ;
-(SDConnectionConfiguration *)configuration;
-(BOOL)quotaDisabled;
-(MDSearchableIndexService *)service;
@end

