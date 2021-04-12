/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSDate;

@interface HGInputBitmapCacheItem : NSObject {

	NSDate* _lastUsedTime;
	CGSize _fullSize;
	vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >* _bitmaps;

}

@property (nonatomic,readonly) vector<HGRef<HGBitmap> bitmaps;              //@synthesize bitmaps=_bitmaps - In the implementation block
@property (nonatomic,readonly) NSDate * lastUsedTime;                       //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (nonatomic,readonly) CGSize fullSize;                             //@synthesize fullSize=_fullSize - In the implementation block
-(NSDate *)lastUsedTime;
-(CGSize)fullSize;
-(void)updateLastUsedTime;
-(id)initWithHGBitmap:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 fullSize:(CGSize)arg2 ;
-(vector<HGRef<HGBitmap>)bitmaps;
@end

