/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {

	NSSet* _addressBookHomes;
	NSSet* _directoryGatewayURLs;

}

@property (nonatomic,readonly) NSSet * addressBookHomes;                  //@synthesize addressBookHomes=_addressBookHomes - In the implementation block
@property (nonatomic,readonly) NSSet * directoryGatewayURLs;              //@synthesize directoryGatewayURLs=_directoryGatewayURLs - In the implementation block
-(id)description;
-(id)homeSet;
-(id)_copyAccountPropertiesPropFindElements;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(id)directoryGatewayURL;
-(NSSet *)addressBookHomes;
-(NSSet *)directoryGatewayURLs;
@end

