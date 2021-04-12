/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)allEntries;
-(id)_trimEntries:(id)arg1 toFitCount:(long long)arg2 ;
-(void)setDelegate:(id<_UIFocusFastScrollingIndexBarEntryTrimmerDelegate>)arg1 ;
-(void)setAllEntries:(NSArray *)arg1 ;
-(id)entriesTrimmedToFitCount:(unsigned long long)arg1 ;
@end

