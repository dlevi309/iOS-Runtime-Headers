/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDataSourceSnapshotter.h>

@class NSIndexSet;

@interface _UICollectionViewListSnapshotter : _UIDataSourceSnapshotter {

	NSIndexSet* _topSeparators;
	NSIndexSet* _bottomSeparators;
	BOOL _displaysAdditionalSeparators;

}

@property (nonatomic,readonly) BOOL displaysAdditionalSeparators;              //@synthesize displaysAdditionalSeparators=_displaysAdditionalSeparators - In the implementation block
+(id)snapshotWithSectionCountsProvider:(/*^block*/id)arg1 topBottomSeparatorProvider:(/*^block*/id)arg2 displaysAdditionalSeparators:(BOOL)arg3 ;
-(BOOL)displaysAdditionalSeparators;
-(id)initWithSectionCountsProvider:(/*^block*/id)arg1 topBottomSeparatorProvider:(/*^block*/id)arg2 displaysAdditionalSeparators:(BOOL)arg3 ;
-(BOOL)hasTopSeparatorInSection:(long long)arg1 ;
-(BOOL)hasBottomSeparatorInSection:(long long)arg1 ;
@end

