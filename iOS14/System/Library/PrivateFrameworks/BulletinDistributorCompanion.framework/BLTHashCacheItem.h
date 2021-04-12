/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSData, NSString, NSURL;

@interface BLTHashCacheItem : NSObject {

	NSData* _MD5;
	NSString* _identifier;
	NSData* _data;
	NSURL* _url;

}

@property (nonatomic,retain) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)hashCacheItemWithData:(id)arg1 URL:(id)arg2 identifier:(id)arg3 ;
-(id)MD5;
-(BOOL)isEqualToItem:(id)arg1 ;
-(NSURL *)url;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(void)setUrl:(NSURL *)arg1 ;
-(unsigned long long)hash;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithURL:(id)arg1 data:(id)arg2 identifier:(id)arg3 ;
@end

