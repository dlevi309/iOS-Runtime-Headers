/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)itemSize;
-(long long)interfaceOrientation;
-(UIEdgeInsets)sectionInset;
-(double)minimumLineSpacing;
-(double)minimumInteritemSpacing;
-(long long)stickerSize;
-(id)initWithSize:(long long)arg1 interfaceOrientation:(long long)arg2 ;
@end

