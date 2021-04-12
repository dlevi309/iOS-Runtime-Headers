/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSURL;

@interface SKUIMediaSocialAuthor : NSObject <NSCopying> {

	NSString* _authorType;
	NSString* _dsid;
	NSString* _identifier;
	NSString* _name;
	NSArray* _permissions;
	NSDictionary* _storePlatformData;
	NSURL* _thumbnailImageURL;

}

@property (nonatomic,copy) NSString * authorType;                         //@synthesize authorType=_authorType - In the implementation block
@property (nonatomic,copy) NSString * dsid;                               //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * permissions;                         //@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * storePlatformData;              //@synthesize storePlatformData=_storePlatformData - In the implementation block
@property (nonatomic,copy) NSURL * thumbnailImageURL;                     //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(NSArray *)permissions;
-(void)setAuthorType:(NSString *)arg1 ;
-(NSString *)authorType;
-(void)setThumbnailImageURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailImageURL;
-(id)initWithAuthorDictionary:(id)arg1 ;
-(void)setStorePlatformData:(NSDictionary *)arg1 ;
-(NSDictionary *)storePlatformData;
-(void)setPermissions:(NSArray *)arg1 ;
@end

