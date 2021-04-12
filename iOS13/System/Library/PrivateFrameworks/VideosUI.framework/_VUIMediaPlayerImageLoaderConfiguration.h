/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@class NSNumber, NSURL;

@interface _VUIMediaPlayerImageLoaderConfiguration : NSObject {

	BOOL _screenshot;
	NSNumber* _persistentidentifier;
	NSURL* _sourceURL;
	NSNumber* _storeIdentifier;
	CGSize _imageSize;

}

@property (assign,getter=isScreenshot,nonatomic) BOOL screenshot;              //@synthesize screenshot=_screenshot - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                 //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,copy) NSNumber * persistentidentifier;                    //@synthesize persistentidentifier=_persistentidentifier - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                                  //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSNumber * storeIdentifier;                         //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(NSNumber *)storeIdentifier;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
-(BOOL)isScreenshot;
-(NSNumber *)persistentidentifier;
-(void)_populateValuesFromQueryItems;
-(void)setPersistentidentifier:(NSNumber *)arg1 ;
-(void)setScreenshot:(BOOL)arg1 ;
@end

