/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

