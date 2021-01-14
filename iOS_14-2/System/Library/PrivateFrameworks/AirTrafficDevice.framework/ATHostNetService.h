/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@class NSNetService, NSString;

@interface ATHostNetService : NSObject {

	NSNetService* _netService;
	NSString* _libraryIdentifier;

}

@property (nonatomic,readonly) NSNetService * netService;                 //@synthesize netService=_netService - In the implementation block
@property (nonatomic,readonly) NSString * libraryIdentifier;              //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
-(NSString *)libraryIdentifier;
-(NSNetService *)netService;
-(id)initWithNetService:(id)arg1 ;
@end

