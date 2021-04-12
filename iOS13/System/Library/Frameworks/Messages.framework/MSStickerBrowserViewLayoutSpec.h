/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/


#import <Messages/Messages-Structs.h>
@interface MSStickerBrowserViewLayoutSpec : NSObject {

	long long _stickerSize;
	long long _interfaceOrientation;
	CGSize _itemSize;

}

@property (nonatomic,readonly) long long stickerSize;                       //@synthesize stickerSize=_stickerSize - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,readonly) CGSize itemSize;                             //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets sectionInset; 
@property (nonatomic,readonly) double minimumInteritemSpacing; 
@property (nonatomic,readonly) double minimumLineSpacing; 
+(id)specWithSizeClass:(long long)arg1 interfaceOrientation:(long long)arg2 ;
-(long long)interfaceOrientation;
-(CGSize)itemSize;
-(double)minimumInteritemSpacing;
-(double)minimumLineSpacing;
-(UIEdgeInsets)sectionInset;
-(long long)stickerSize;
-(id)initWithSize:(long long)arg1 interfaceOrientation:(long long)arg2 ;
@end

