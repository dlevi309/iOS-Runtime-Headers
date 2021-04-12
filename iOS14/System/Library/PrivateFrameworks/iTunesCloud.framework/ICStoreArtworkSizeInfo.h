/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSArray;

@interface ICStoreArtworkSizeInfo : NSObject {

	BOOL _hasMaxSupportedSize;
	long long _type;
	NSArray* _supportedSizes;
	CGSize _maxSupportedSize;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * supportedSizes;                //@synthesize supportedSizes=_supportedSizes - In the implementation block
@property (assign,nonatomic) BOOL hasMaxSupportedSize;              //@synthesize hasMaxSupportedSize=_hasMaxSupportedSize - In the implementation block
@property (assign,nonatomic) CGSize maxSupportedSize;               //@synthesize maxSupportedSize=_maxSupportedSize - In the implementation block
-(NSArray *)supportedSizes;
-(void)setSupportedSizes:(NSArray *)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setMaxSupportedSize:(CGSize)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(BOOL)hasMaxSupportedSize;
-(void)setHasMaxSupportedSize:(BOOL)arg1 ;
-(CGSize)maxSupportedSize;
-(BOOL)isEqual:(id)arg1 ;
@end

