/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICStoreArtworkSizeInfo, NSURL, NSArray, NSDictionary;

@interface ICStoreArtworkInfo : NSObject <NSCopying> {

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
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)originalSize;
-(NSDictionary *)responseDictionary;
-(id)initWithArtworkResponseDictionary:(id)arg1 ;
-(id)artworkURLWithSize:(CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 ;
-(CGColorRef)copyColorWithKind:(id)arg1 ;
-(NSURL *)artworkURL;
-(id)initWithArtworkURL:(id)arg1 ;
-(id)initWithArtworkResponseArray:(id)arg1 ;
-(void)_sortResponseArray;
-(void)_sortSupportedSizesArray;
-(BOOL)_hasOriginalSize;
-(ICStoreArtworkSizeInfo *)sizeInfo;
-(id)artworkURLWithSize:(CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 preferP3ColorSpace:(BOOL)arg4 ;
-(NSArray *)sortedResponseArray;
-(id)initWithArtworkResponseValue:(id)arg1 ;
-(void)setSortedResponseArray:(NSArray *)arg1 ;
-(NSArray *)sortedSupportedSizesArray;
-(void)setSortedSupportedSizesArray:(NSArray *)arg1 ;
-(NSArray *)responseArray;
@end

