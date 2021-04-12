/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSURL, NSArray, NSString;

@interface MPStoreArtworkRequestToken : NSObject <NSSecureCoding, MPArtworkDataSourceVisualIdenticality> {

	BOOL _shouldIgnoreImage;
	NSURL* _artworkURL;
	NSArray* _lookupItemArtworks;
	NSArray* _artworkInfoEntries;
	NSString* _cropStyle;
	NSString* _format;
	NSString* _sourceEditorialArtworkKind;

}

@property (nonatomic,copy) NSURL * artworkURL;                                 //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,copy) NSArray * lookupItemArtworks;                       //@synthesize lookupItemArtworks=_lookupItemArtworks - In the implementation block
@property (nonatomic,copy) NSArray * artworkInfoEntries;                       //@synthesize artworkInfoEntries=_artworkInfoEntries - In the implementation block
@property (nonatomic,copy) NSString * cropStyle;                               //@synthesize cropStyle=_cropStyle - In the implementation block
@property (nonatomic,copy) NSString * format;                                  //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreImage;                           //@synthesize shouldIgnoreImage=_shouldIgnoreImage - In the implementation block
@property (nonatomic,copy) NSString * sourceEditorialArtworkKind;              //@synthesize sourceEditorialArtworkKind=_sourceEditorialArtworkKind - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)format;
-(id)stringRepresentation;
-(void)setFormat:(NSString *)arg1 ;
-(NSURL *)artworkURL;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(NSArray *)lookupItemArtworks;
-(void)setLookupItemArtworks:(NSArray *)arg1 ;
-(NSArray *)artworkInfoEntries;
-(void)setArtworkInfoEntries:(NSArray *)arg1 ;
-(NSString *)cropStyle;
-(void)setCropStyle:(NSString *)arg1 ;
-(BOOL)shouldIgnoreImage;
-(void)setShouldIgnoreImage:(BOOL)arg1 ;
-(NSString *)sourceEditorialArtworkKind;
-(void)setSourceEditorialArtworkKind:(NSString *)arg1 ;
@end

