/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSURL, NSString;

@interface SSUpdatableAsset : NSObject {

	NSURL* _cacheURL;
	NSString* _md5;
	NSString* _name;
	NSURL* _serverURL;
	NSString* _version;

}

@property (setter=_setCacheURL:,nonatomic,retain) NSURL * cacheURL;                //@synthesize cacheURL=_cacheURL - In the implementation block
@property (setter=_setMD5:,nonatomic,copy) NSString * md5;                         //@synthesize md5=_md5 - In the implementation block
@property (setter=_setName:,nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (setter=_setServerURL:,nonatomic,retain) NSURL * serverURL;              //@synthesize serverURL=_serverURL - In the implementation block
@property (setter=_setVersion:,nonatomic,copy) NSString * version;                 //@synthesize version=_version - In the implementation block
-(NSString *)md5;
-(void)_setName:(id)arg1 ;
-(void)_setCacheURL:(id)arg1 ;
-(void)_setServerURL:(id)arg1 ;
-(NSURL *)serverURL;
-(NSString *)name;
-(NSURL *)cacheURL;
-(void)_setMD5:(id)arg1 ;
-(void)_setVersion:(id)arg1 ;
-(NSString *)version;
@end

