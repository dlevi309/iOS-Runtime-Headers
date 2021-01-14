/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MediaService, NSUUID;

@interface MSDDefaultsInfo : NSObject <NSSecureCoding> {

	NSString* _recordName;
	NSString* _recordZoneName;
	NSString* _recordType;
	MediaService* _service;
	NSUUID* _homeID;
	NSUUID* _homeUserID;

}

@property (nonatomic,copy) NSString * recordName;                   //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,copy) NSString * recordZoneName;               //@synthesize recordZoneName=_recordZoneName - In the implementation block
@property (nonatomic,copy) NSString * recordType;                   //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,readonly) MediaService * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSUUID * homeID;                     //@synthesize homeID=_homeID - In the implementation block
@property (nonatomic,readonly) NSUUID * homeUserID;                 //@synthesize homeUserID=_homeUserID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)homeID;
-(NSString *)recordZoneName;
-(NSString *)recordType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setRecordType:(NSString *)arg1 ;
-(void)setRecordName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)recordName;
-(void)setRecordZoneName:(NSString *)arg1 ;
-(MediaService *)service;
-(id)initWithService:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 ;
-(NSUUID *)homeUserID;
@end

