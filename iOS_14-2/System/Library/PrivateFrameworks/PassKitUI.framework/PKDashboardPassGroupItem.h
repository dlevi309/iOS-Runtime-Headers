/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)identifier;
-(PKPassGroupView *)groupView;
-(id)initWithGroupView:(id)arg1 ;
@end

