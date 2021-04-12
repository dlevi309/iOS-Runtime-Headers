/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_copyAccountPropertiesPropFindElements;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(id)homeSet;
-(id)directoryGatewayURL;
-(NSSet *)addressBookHomes;
-(NSSet *)directoryGatewayURLs;
@end

