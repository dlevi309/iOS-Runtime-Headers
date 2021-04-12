/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)snapshotterForSectionCountsProvider:(/*^block*/id)arg1 topBottomSeparatorProvider:(/*^block*/id)arg2 displaysAdditionalSeparators:(BOOL)arg3 ;
-(BOOL)hasTopSeparatorInSection:(long long)arg1 ;
-(BOOL)displaysAdditionalSeparators;
-(id)initWithSectionCountsProvider:(/*^block*/id)arg1 topBottomSeparatorProvider:(/*^block*/id)arg2 displaysAdditionalSeparators:(BOOL)arg3 ;
-(BOOL)hasBottomSeparatorInSection:(long long)arg1 ;
@end

