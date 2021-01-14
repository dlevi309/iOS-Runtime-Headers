/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewCellLayoutManager.h>

@interface EKCalendarChooserCellLayoutManager : UITableViewCellLayoutManager {

	id _realLayoutManager;

}
+(id)sharedLayoutManagerForStyle:(long long)arg1 ;
-(id)defaultDetailTextLabelFontForCell:(id)arg1 ;
-(id)defaultTextLabelFontForCell:(id)arg1 ;
-(double)defaultDetailTextLabelFontSizeForCell:(id)arg1 ;
-(id)detailTextLabelForCell:(id)arg1 ;
-(void)getTextLabelRect:(CGRect*)arg1 detailTextLabelRect:(CGRect*)arg2 forCell:(id)arg3 rowWidth:(double)arg4 forSizing:(BOOL)arg5 ;
-(CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(BOOL)arg3 ;
-(CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2 ;
-(double)defaultTextLabelFontSizeForCell:(id)arg1 ;
-(id)initWithCellStyle:(long long)arg1 ;
-(BOOL)rect:(CGRect)arg1 trailsOtherRect:(CGRect)arg2 byDistance:(double*)arg3 ;
@end

