/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKPassGroupView, NSString;

@interface PKDashboardPassGroupItem : NSObject <PKDashboardItem> {

	PKPassGroupView* _groupView;

}

@property (nonatomic,readonly) PKPassGroupView * groupView;              //@synthesize groupView=_groupView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPassGroupView *)groupView;
-(id)initWithGroupView:(id)arg1 ;
@end

