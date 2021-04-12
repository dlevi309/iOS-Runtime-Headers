/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewCellLayoutManager.h>

@interface EKCalendarChooserCellLayoutManager : UITableViewCellLayoutManager {

	id _realLayoutManager;

}
+(id)sharedLayoutManagerForStyle:(long long)arg1 ;
-(id)defaultTextLabelFontForCell:(id)arg1 ;
-(double)defaultTextLabelFontSizeForCell:(id)arg1 ;
-(void)getTextLabelRect:(CGRect*)arg1 detailTextLabelRect:(CGRect*)arg2 forCell:(id)arg3 rowWidth:(double)arg4 forSizing:(BOOL)arg5 ;
-(CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(BOOL)arg3 ;
-(double)defaultDetailTextLabelFontSizeForCell:(id)arg1 ;
-(id)defaultDetailTextLabelFontForCell:(id)arg1 ;
-(id)detailTextLabelForCell:(id)arg1 ;
-(CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2 ;
-(id)initWithCellStyle:(long long)arg1 ;
-(BOOL)rect:(CGRect)arg1 trailsOtherRect:(CGRect)arg2 byDistance:(double*)arg3 ;
@end

