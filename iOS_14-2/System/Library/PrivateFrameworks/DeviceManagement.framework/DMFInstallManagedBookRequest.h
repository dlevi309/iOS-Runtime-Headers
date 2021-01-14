/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSNumber, NSURL;

@interface DMFInstallManagedBookRequest : DMFTaskRequest {

	NSString* _originator;
	NSNumber* _iTunesStoreID;
	NSString* _persistentID;
	NSString* _author;
	NSString* _title;
	NSString* _version;
	NSURL* _URL;
	unsigned long long _type;

}

@property (nonatomic,copy) NSString * originator;                  //@synthesize originator=_originator - In the implementation block
@property (nonatomic,copy) NSNumber * iTunesStoreID;               //@synthesize iTunesStoreID=_iTunesStoreID - In the implementation block
@property (nonatomic,copy) NSString * persistentID;                //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,copy) NSString * author;                      //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * version;                     //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setPersistentID:(NSString *)arg1 ;
-(NSNumber *)iTunesStoreID;
-(void)setITunesStoreID:(NSNumber *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)persistentID;
-(unsigned long long)type;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)originator;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(NSString *)title;
-(void)setOriginator:(NSString *)arg1 ;
@end

