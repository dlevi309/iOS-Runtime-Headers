/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSArray *)supportedSizes;
-(void)setSupportedSizes:(NSArray *)arg1 ;
-(BOOL)hasMaxSupportedSize;
-(void)setHasMaxSupportedSize:(BOOL)arg1 ;
-(CGSize)maxSupportedSize;
-(void)setMaxSupportedSize:(CGSize)arg1 ;
@end

