/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayoutInvalidationContext.h>

@class NSMutableIndexSet, NSIndexSet;

@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext {

	NSMutableIndexSet* _invalidatedSections;
	CFDictionaryRef _headerWidthDict;

}

@property (nonatomic,readonly) NSIndexSet * invalidatedSections;              //@synthesize invalidatedSections=_invalidatedSections - In the implementation block
-(void)dealloc;
-(double)preferredWidthForHeaderInSection:(long long)arg1 ;
-(NSIndexSet *)invalidatedSections;
@end

