/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICStoreArtworkSizeInfo, NSURL, NSArray, NSDictionary, NSString;

@interface ICStoreArtworkInfo : NSObject <NSCopying, NSSecureCoding> {

	ICStoreArtworkSizeInfo* _sizeInfo;
	NSURL* _artworkURL;
	NSArray* _sortedResponseArray;
	NSArray* _sortedSupportedSizesArray;
	NSArray* _responseArray;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy) NSArray * sortedResponseArray;                           //@synthesize sortedResponseArray=_sortedResponseArray - In the implementation block
@property (nonatomic,copy) NSArray * sortedSupportedSizesArray;                     //@synthesize sortedSupportedSizesArray=_sortedSupportedSizesArray - In the implementation block
@property (nonatomic,copy,readonly) NSURL * artworkURL;                             //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * responseArray;                        //@synthesize responseArray=_responseArray - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) ICStoreArtworkSizeInfo * sizeInfo;                   //@synthesize sizeInfo=_sizeInfo - In the implementation block
@property (nonatomic,readonly) CGSize originalSize; 
@property (nonatomic,copy,readonly) NSString * stringRepresentation; 
+(BOOL)supportsSecureCoding;
-(NSArray *)responseArray;
-(NSURL *)artworkURL;
-(NSString *)stringRepresentation;
-(ICStoreArtworkSizeInfo *)sizeInfo;
-(void)_sortSupportedSizesArray;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(BOOL)_hasOriginalSize;
-(NSArray *)sortedSupportedSizesArray;
-(id)artworkURLWithSize:(CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 ;
-(NSArray *)sortedResponseArray;
-(id)initWithArtworkResponseDictionary:(id)arg1 ;
-(void)setSortedResponseArray:(NSArray *)arg1 ;
-(id)initWithArtworkResponseValue:(id)arg1 ;
-(CGColorRef)copyColorWithKind:(id)arg1 ;
-(id)initWithArtworkURL:(id)arg1 ;
-(id)initWithArtworkResponseArray:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)originalSize;
-(void)setSortedSupportedSizesArray:(NSArray *)arg1 ;
-(id)artworkURLWithSize:(CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 preferP3ColorSpace:(BOOL)arg4 ;
-(void)_sortResponseArray;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

