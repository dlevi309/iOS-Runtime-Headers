/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SULoadMoreMediaCellConfiguration : SUItemCellConfiguration {

	double _previousCellHeight;

}

@property (assign,nonatomic) double previousCellHeight;              //@synthesize previousCellHeight=_previousCellHeight - In the implementation block
+(double)rowHeightForContext:(id)arg1 representedObject:(id)arg2 ;
-(id)init;
-(id)fontForLabelAtIndex:(unsigned long long)arg1 ;
-(id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(void)reloadImages;
-(void)reloadStrings;
-(void)reloadLayoutInformation;
-(void)setPreviousCellHeight:(double)arg1 ;
-(double)previousCellHeight;
@end

