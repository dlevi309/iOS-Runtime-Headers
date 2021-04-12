/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDSlideChild.h>

@class PDSlideMaster;

@interface PDSlideLayout : PDSlideChild {

	int mSlideLayoutType;
	PDSlideMaster* mSlideMaster;

}

@property (__weak) PDSlideMaster * slideMaster; 
-(id)description;
-(id)background;
-(id)transition;
-(id)defaultTheme;
-(PDSlideMaster *)slideMaster;
-(id)parentSlideBase;
-(void)doneWithContent;
-(int)slideLayoutType;
-(void)setSlideMaster:(PDSlideMaster *)arg1 ;
-(void)setSlideLayoutType:(int)arg1 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentTextStyleForTables;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)initWithSlideMaster:(id)arg1 ;
@end

