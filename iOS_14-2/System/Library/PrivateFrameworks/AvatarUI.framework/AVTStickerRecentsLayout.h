/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


#import <AvatarUI/AvatarUI-Structs.h>
@interface AVTStickerRecentsLayout : NSObject {

	BOOL _laysOutVertically;
	long long _numberOfItems;
	long long _numberOfItemsPerRow;
	long long _numberOfItemsPerColumn;
	long long _interitemPadding;
	long long _appButtonIndex;

}

@property (nonatomic,readonly) long long numberOfItems;                       //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (nonatomic,readonly) long long numberOfItemsPerRow;                 //@synthesize numberOfItemsPerRow=_numberOfItemsPerRow - In the implementation block
@property (nonatomic,readonly) long long numberOfItemsPerColumn;              //@synthesize numberOfItemsPerColumn=_numberOfItemsPerColumn - In the implementation block
@property (nonatomic,readonly) long long interitemPadding;                    //@synthesize interitemPadding=_interitemPadding - In the implementation block
@property (nonatomic,readonly) long long appButtonIndex;                      //@synthesize appButtonIndex=_appButtonIndex - In the implementation block
@property (nonatomic,readonly) BOOL laysOutVertically;                        //@synthesize laysOutVertically=_laysOutVertically - In the implementation block
+(CGSize)buttonSizeForContainerSize:(CGSize)arg1 imageSize:(CGSize)arg2 ;
-(long long)numberOfItems;
-(long long)numberOfItemsPerRow;
-(unsigned long long)hash;
-(id)initWithNumberOfItemsPerRow:(long long)arg1 numberOfItemsPerColumn:(long long)arg2 interitemPadding:(double)arg3 appButtonIndex:(long long)arg4 laysOutVertically:(BOOL)arg5 ;
-(long long)interitemPadding;
-(long long)appButtonIndex;
-(BOOL)laysOutVertically;
-(long long)numberOfItemsPerColumn;
-(BOOL)isEqual:(id)arg1 ;
@end

