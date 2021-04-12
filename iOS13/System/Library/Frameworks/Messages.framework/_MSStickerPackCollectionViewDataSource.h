/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <libobjc.A.dylib/MSStickerBrowserViewDataSource.h>

@class NSMutableArray, NSString;

@interface _MSStickerPackCollectionViewDataSource : NSObject <MSStickerBrowserViewDataSource> {

	long long _stickerSize;
	NSMutableArray* _stickers;

}

@property (nonatomic,readonly) NSMutableArray * stickers;              //@synthesize stickers=_stickers - In the implementation block
@property (nonatomic,readonly) long long stickerSize;                  //@synthesize stickerSize=_stickerSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_stickerSizeFromString:(id)arg1 ;
-(NSMutableArray *)stickers;
-(long long)numberOfStickersInStickerBrowserView:(id)arg1 ;
-(id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2 ;
-(void)_loadStickerPackWithURL:(id)arg1 ;
-(id)initWithStickerPackURL:(id)arg1 ;
-(long long)stickerSize;
-(id)_allStickers;
@end

