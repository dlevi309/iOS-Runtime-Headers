/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSItemGroup.h>

@protocol VSJSItemGroup <JSExport>
@property (assign,nonatomic) long long selectedItem; 
@required
-(void)setSelectedItem:(long long)arg1;
-(long long)selectedItem;

@end


@protocol VSJSItemGroupBridge;
@interface VSJSItemGroup : IKJSObject <VSJSItemGroup> {

	long long _selectedItem;
	id<VSJSItemGroupBridge> _bridge;

}

@property (nonatomic,retain) id<VSJSItemGroupBridge> bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (assign,nonatomic) long long selectedItem;                      //@synthesize selectedItem=_selectedItem - In the implementation block
-(void)setSelectedItem:(long long)arg1 ;
-(long long)selectedItem;
-(id<VSJSItemGroupBridge>)bridge;
-(void)setBridge:(id<VSJSItemGroupBridge>)arg1 ;
@end

