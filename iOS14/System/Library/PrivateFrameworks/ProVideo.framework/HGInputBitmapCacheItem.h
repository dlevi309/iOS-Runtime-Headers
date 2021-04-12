/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSDate, PVColorSpace;

@interface HGInputBitmapCacheItem : NSObject {

	NSDate* _lastUsedTime;
	PVColorSpace* _colorSpace;
	CGSize _fullSize;
	vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >* _bitmaps;

}

@property (nonatomic,readonly) vector<HGRef<HGBitmap> bitmaps;              //@synthesize bitmaps=_bitmaps - In the implementation block
@property (nonatomic,readonly) NSDate * lastUsedTime;                       //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (nonatomic,readonly) CGSize fullSize;                             //@synthesize fullSize=_fullSize - In the implementation block
@property (nonatomic,readonly) PVColorSpace * colorSpace;                   //@synthesize colorSpace=_colorSpace - In the implementation block
-(PVColorSpace *)colorSpace;
-(NSDate *)lastUsedTime;
-(CGSize)fullSize;
-(vector<HGRef<HGBitmap>)bitmaps;
-(void)updateLastUsedTime;
-(id)initWithHGBitmap:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 fullSize:(CGSize)arg2 colorSpace:(id)arg3 ;
@end

