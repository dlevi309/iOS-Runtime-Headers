/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSString *)version;
-(void)_setName:(id)arg1 ;
-(NSString *)md5;
-(NSURL *)cacheURL;
-(void)_setVersion:(id)arg1 ;
-(NSURL *)serverURL;
-(void)_setCacheURL:(id)arg1 ;
-(void)_setServerURL:(id)arg1 ;
-(void)_setMD5:(id)arg1 ;
@end

