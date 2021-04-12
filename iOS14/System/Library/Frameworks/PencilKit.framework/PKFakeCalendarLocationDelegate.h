/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKScribbleInteractionElementSource.h>
#import <libobjc.A.dylib/PKScribbleInteractionDelegate.h>

@class UITableViewCell, UITableView, UIWindow, NSUUID, NSString;

@interface PKFakeCalendarLocationDelegate : NSObject <PKScribbleInteractionElementSource, PKScribbleInteractionDelegate> {

	UITableViewCell* _cell;
	UITableView* _tableView;
	UIWindow* _window;
	NSUUID* _elementID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2 ;
-(void)_scribbleInteraction:(id)arg1 requestElementsInRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2 ;
-(id)initWithCell:(id)arg1 window:(id)arg2 ;
-(id)_searchBarInView:(id)arg1 ;
@end

