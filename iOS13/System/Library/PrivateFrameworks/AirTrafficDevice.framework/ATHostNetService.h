/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@class NSNetService, NSString;

@interface ATHostNetService : NSObject {

	NSNetService* _netService;
	NSString* _libraryIdentifier;

}

@property (nonatomic,readonly) NSNetService * netService;                 //@synthesize netService=_netService - In the implementation block
@property (nonatomic,readonly) NSString * libraryIdentifier;              //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
-(id)initWithNetService:(id)arg1 ;
-(NSNetService *)netService;
-(NSString *)libraryIdentifier;
@end

