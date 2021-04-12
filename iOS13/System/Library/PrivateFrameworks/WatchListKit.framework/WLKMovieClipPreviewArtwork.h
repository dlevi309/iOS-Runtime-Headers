/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


#import <WatchListKit/WatchListKit-Structs.h>
@class NSString, WLKArtworkVariant;

@interface WLKMovieClipPreviewArtwork : NSObject {

	BOOL _supportsLayeredImage;
	NSString* _bgColor;
	NSString* _textColor1;
	NSString* _textColor2;
	NSString* _textColor3;
	NSString* _textColor4;
	NSString* _url;
	CGSize _artworkSize;

}

@property (nonatomic,readonly) CGSize artworkSize;                              //@synthesize artworkSize=_artworkSize - In the implementation block
@property (nonatomic,readonly) BOOL supportsLayeredImage;                       //@synthesize supportsLayeredImage=_supportsLayeredImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * bgColor;                         //@synthesize bgColor=_bgColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * textColor1;                      //@synthesize textColor1=_textColor1 - In the implementation block
@property (nonatomic,copy,readonly) NSString * textColor2;                      //@synthesize textColor2=_textColor2 - In the implementation block
@property (nonatomic,copy,readonly) NSString * textColor3;                      //@synthesize textColor3=_textColor3 - In the implementation block
@property (nonatomic,copy,readonly) NSString * textColor4;                      //@synthesize textColor4=_textColor4 - In the implementation block
@property (nonatomic,copy,readonly) NSString * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) WLKArtworkVariant * artworkVariant; 
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)_init;
-(NSString *)url;
-(NSString *)bgColor;
-(CGSize)artworkSize;
-(BOOL)supportsLayeredImage;
-(WLKArtworkVariant *)artworkVariant;
-(NSString *)textColor1;
-(NSString *)textColor2;
-(NSString *)textColor3;
-(NSString *)textColor4;
@end

