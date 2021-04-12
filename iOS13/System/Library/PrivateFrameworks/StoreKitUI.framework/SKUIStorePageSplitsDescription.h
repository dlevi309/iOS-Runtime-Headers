/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SKUIStorePageSplit;

@interface SKUIStorePageSplitsDescription : NSObject <NSCopying> {

	SKUIStorePageSplit* _bottomSplit;
	SKUIStorePageSplit* _leftSplit;
	SKUIStorePageSplit* _rightSplit;
	SKUIStorePageSplit* _topSplit;

}

@property (nonatomic,copy) SKUIStorePageSplit * bottomSplit;                 //@synthesize bottomSplit=_bottomSplit - In the implementation block
@property (nonatomic,copy) SKUIStorePageSplit * leftSplit;                   //@synthesize leftSplit=_leftSplit - In the implementation block
@property (nonatomic,copy) SKUIStorePageSplit * rightSplit;                  //@synthesize rightSplit=_rightSplit - In the implementation block
@property (nonatomic,copy) SKUIStorePageSplit * topSplit;                    //@synthesize topSplit=_topSplit - In the implementation block
@property (nonatomic,readonly) SKUIStorePageSplit * firstSplit; 
@property (nonatomic,readonly) long long numberOfSplits; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateSplitsUsingBlock:(/*^block*/id)arg1 ;
-(void)setTopSplit:(SKUIStorePageSplit *)arg1 ;
-(long long)numberOfSplits;
-(void)sizeSplitsToFitWidth:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(SKUIStorePageSplit *)leftSplit;
-(SKUIStorePageSplit *)rightSplit;
-(SKUIStorePageSplit *)firstSplit;
-(void)setBottomSplit:(SKUIStorePageSplit *)arg1 ;
-(void)setLeftSplit:(SKUIStorePageSplit *)arg1 ;
-(void)setRightSplit:(SKUIStorePageSplit *)arg1 ;
-(SKUIStorePageSplit *)bottomSplit;
-(SKUIStorePageSplit *)topSplit;
@end

