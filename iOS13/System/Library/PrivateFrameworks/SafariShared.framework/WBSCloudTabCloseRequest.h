/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSURL, NSDate, NSDictionary;

@interface WBSCloudTabCloseRequest : NSObject <NSCopying> {

	NSUUID* _sourceDeviceUUID;
	NSUUID* _requestUUID;
	NSUUID* _destinationDeviceUUID;
	NSUUID* _tabUUID;
	NSURL* _url;
	NSDate* _lastModified;

}

@property (nonatomic,readonly) NSUUID * requestUUID;                                 //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * destinationDeviceUUID;                       //@synthesize destinationDeviceUUID=_destinationDeviceUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * tabUUID;                                     //@synthesize tabUUID=_tabUUID - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDate * lastModified;                                //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)_dictionaryWithURL:(id)arg1 tabUUID:(id)arg2 lastModified:(id)arg3 sourceDeviceUUID:(id)arg4 destinationDeviceUUID:(id)arg5 ;
+(BOOL)isCloudTabCloseRequestDictionary:(id)arg1 ;
+(id)destinationDeviceUUIDInDictionary:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSURL *)url;
-(NSUUID *)requestUUID;
-(NSDate *)lastModified;
-(id)initWithDictionary:(id)arg1 requestUUID:(id)arg2 ;
-(id)initWithURL:(id)arg1 tabUUID:(id)arg2 lastModified:(id)arg3 sourceDeviceUUID:(id)arg4 destinationDeviceUUID:(id)arg5 requestUUID:(id)arg6 ;
-(BOOL)matchesCloudTab:(id)arg1 ;
-(NSUUID *)destinationDeviceUUID;
-(NSUUID *)tabUUID;
@end

