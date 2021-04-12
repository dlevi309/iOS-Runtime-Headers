/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


#import <WatchListKit/WatchListKit-Structs.h>
@class NSString, NSURL;

@interface WLKArtworkVariant : NSObject {

	NSString* _artworkURLTemplate;
	BOOL _supportsLayeredImage;
	BOOL _alpha;
	NSString* _artworkURLString;
	long long _artworkType;
	NSString* _format;
	CGSize _artworkSize;

}

@property (nonatomic,copy,readonly) NSURL * artworkURL; 
@property (nonatomic,copy,readonly) NSString * artworkURLString;              //@synthesize artworkURLString=_artworkURLString - In the implementation block
@property (nonatomic,readonly) CGSize artworkSize;                            //@synthesize artworkSize=_artworkSize - In the implementation block
@property (nonatomic,readonly) long long artworkType;                         //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,copy,readonly) NSString * format;                        //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) BOOL supportsLayeredImage;                       //@synthesize supportsLayeredImage=_supportsLayeredImage - In the implementation block
@property (assign,getter=hasAlpha,nonatomic) BOOL alpha;                      //@synthesize alpha=_alpha - In the implementation block
+(id)artworkURLFromTemplate:(id)arg1 forSize:(CGSize)arg2 cropCode:(id)arg3 format:(id)arg4 ;
+(id)artworkURLFromTemplate:(id)arg1 forSize:(CGSize)arg2 format:(id)arg3 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)format;
-(void)setAlpha:(BOOL)arg1 ;
-(long long)artworkType;
-(NSURL *)artworkURL;
-(CGSize)artworkSize;
-(id)artworkURLForSize:(CGSize)arg1 ;
-(BOOL)hasAlpha;
-(BOOL)supportsLayeredImage;
-(void)setSupportsLayeredImage:(BOOL)arg1 ;
-(id)artworkURLForSize:(CGSize)arg1 format:(id)arg2 ;
-(id)artworkURLForSize:(CGSize)arg1 cropCode:(id)arg2 format:(id)arg3 ;
-(id)_sizeDescription:(CGSize)arg1 ;
-(id)artworkSizeTemplateURL;
-(NSString *)artworkURLString;
@end

