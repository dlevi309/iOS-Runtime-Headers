/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKBrowserSwitcherFooterViewDataSource.h>

@protocol CKBrowserSwitcherFooterViewDataSource <NSObject>
@required
-(unsigned long long)numberOfPluginsInSwitcherView:(id)arg1 forSection:(unsigned long long)arg2;
-(id)switcherView:(id)arg1 modelAtIndexPath:(id)arg2 type:(long long*)arg3;
-(id)switcherView:(id)arg1 indexPathOfModelWithIdentifier:(id)arg2;

@end


@class NSString;

@interface CKBrowserSwitcherFooterViewDataSource : NSObject <CKBrowserSwitcherFooterViewDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)numberOfPluginsInSwitcherView:(id)arg1 forSection:(unsigned long long)arg2 ;
-(id)switcherView:(id)arg1 modelAtIndexPath:(id)arg2 type:(long long*)arg3 ;
-(id)switcherView:(id)arg1 indexPathOfModelWithIdentifier:(id)arg2 ;
-(id)pluginManager;
@end

