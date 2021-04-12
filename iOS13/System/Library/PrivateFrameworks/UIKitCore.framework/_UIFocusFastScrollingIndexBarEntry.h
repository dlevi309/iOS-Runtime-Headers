/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, NSIndexPath;

@interface _UIFocusFastScrollingIndexBarEntry : NSObject {

	BOOL _isPlaceholder;
	BOOL _hasCachedContentOffset;
	CGPoint _cachedContentOffset;
	/*^block*/id _contentOffsetGenerator;
	NSString* _title;
	NSIndexPath* _targetFocusedIndexPath;

}

@property (nonatomic,copy,readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) CGPoint contentOffset; 
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder; 
@property (nonatomic,copy) NSIndexPath * targetFocusedIndexPath;                   //@synthesize targetFocusedIndexPath=_targetFocusedIndexPath - In the implementation block
+(id)entryWithTitle:(id)arg1 generator:(/*^block*/id)arg2 ;
+(id)placeholderEntryWithEntryBefore:(id)arg1 after:(id)arg2 ;
+(id)entryWithTitle:(id)arg1 contentOffset:(CGPoint)arg2 ;
-(id)description;
-(NSString *)title;
-(BOOL)isPlaceholder;
-(CGPoint)contentOffset;
-(void)setTargetFocusedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)targetFocusedIndexPath;
-(id)initWithTitle:(id)arg1 contentOffset:(CGPoint)arg2 ;
-(id)initWithTitle:(id)arg1 generator:(/*^block*/id)arg2 ;
@end

