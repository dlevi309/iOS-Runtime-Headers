/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXSelectedItemsSnapshot.h>

@protocol PXBrowserSelectionSnapshot;
@interface _PXBrowserSummarySelectedItemsSnapshot : NSObject <PXSelectedItemsSnapshot> {

	id<PXBrowserSelectionSnapshot> _browserSelectionSnapshot;

}

@property (nonatomic,readonly) id<PXBrowserSelectionSnapshot> browserSelectionSnapshot;              //@synthesize browserSelectionSnapshot=_browserSelectionSnapshot - In the implementation block
@property (nonatomic,readonly) long long count; 
-(id)init;
-(id)initWithBrowserSelectionSnapshot:(id)arg1 ;
-(id)itemReferenceAtIndex:(long long)arg1 ;
-(id)containsItemReference:(id)arg1 ;
-(id)itemForItemReference:(id)arg1 ;
-(id<PXBrowserSelectionSnapshot>)browserSelectionSnapshot;
-(long long)count;
@end

