/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SDConnectionConfiguration *)configuration;
-(MDSearchableIndexService *)service;
-(BOOL)quotaDisabled;
-(id)initWithConfiguration:(id)arg1 indexer:(id)arg2 ;
-(id)initWithConnection:(id)arg1 indexer:(id)arg2 ;
@end

