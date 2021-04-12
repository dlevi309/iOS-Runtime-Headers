/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/


@class NSMutableDictionary;

@interface WFImageCache : NSObject {

	NSMutableDictionary* _imageCache;

}

@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedImageCache;
-(id)init;
-(void)clearCache;
-(NSMutableDictionary *)imageCache;
-(id)imageNamed:(id)arg1 ;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(BOOL)_isUIKitImageName:(id)arg1 ;
@end

