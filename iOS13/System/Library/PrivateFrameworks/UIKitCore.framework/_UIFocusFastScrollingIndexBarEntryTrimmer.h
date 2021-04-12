/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIFocusFastScrollingIndexBarEntryTrimmerDelegate;
@class NSArray;

@interface _UIFocusFastScrollingIndexBarEntryTrimmer : NSObject {

	NSArray* _allEntries;
	id<_UIFocusFastScrollingIndexBarEntryTrimmerDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * allEntries;                                                                 //@synthesize allEntries=_allEntries - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFocusFastScrollingIndexBarEntryTrimmerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_UIFocusFastScrollingIndexBarEntryTrimmerDelegate>)delegate;
-(void)setDelegate:(id<_UIFocusFastScrollingIndexBarEntryTrimmerDelegate>)arg1 ;
-(void)setAllEntries:(NSArray *)arg1 ;
-(id)entriesTrimmedToFitCount:(unsigned long long)arg1 ;
-(id)_trimEntries:(id)arg1 toFitCount:(long long)arg2 ;
-(NSArray *)allEntries;
@end

