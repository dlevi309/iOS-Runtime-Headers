/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSItemGroup.h>

@protocol VSJSItemGroup <JSExport>
@property (assign,nonatomic) long long selectedItem; 
@required
-(long long)selectedItem;
-(void)setSelectedItem:(long long)arg1;

@end


@protocol VSJSItemGroupBridge;
@interface VSJSItemGroup : IKJSObject <VSJSItemGroup> {

	long long _selectedItem;
	id<VSJSItemGroupBridge> _bridge;

}

@property (nonatomic,retain) id<VSJSItemGroupBridge> bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (assign,nonatomic) long long selectedItem;                      //@synthesize selectedItem=_selectedItem - In the implementation block
-(void)setBridge:(id<VSJSItemGroupBridge>)arg1 ;
-(id<VSJSItemGroupBridge>)bridge;
-(long long)selectedItem;
-(void)setSelectedItem:(long long)arg1 ;
@end

