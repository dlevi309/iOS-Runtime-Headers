/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)data;
-(NSString *)identifier;
-(void)setData:(NSData *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)MD5;
-(BOOL)isEqualToItem:(id)arg1 ;
-(id)initWithURL:(id)arg1 data:(id)arg2 identifier:(id)arg3 ;
@end

