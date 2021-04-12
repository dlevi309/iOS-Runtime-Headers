/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)pluginManager;
-(id)init;
-(unsigned long long)numberOfPluginsInSwitcherView:(id)arg1 forSection:(unsigned long long)arg2 ;
-(id)switcherView:(id)arg1 modelAtIndexPath:(id)arg2 type:(long long*)arg3 ;
-(id)switcherView:(id)arg1 indexPathOfModelWithIdentifier:(id)arg2 ;
@end

