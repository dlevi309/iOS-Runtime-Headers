/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)numberOfStickersInStickerBrowserView:(id)arg1 ;
-(id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2 ;
-(NSMutableArray *)stickers;
-(void)_loadStickerPackWithURL:(id)arg1 ;
-(id)initWithStickerPackURL:(id)arg1 ;
-(long long)stickerSize;
-(id)_allStickers;
@end

