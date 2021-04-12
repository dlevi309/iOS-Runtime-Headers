/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemManager.h>

@class HFMediaAccessControlEditorItemModule;

@interface HFMediaAccessControlEditorItemManager : HFItemManager {

	HFMediaAccessControlEditorItemModule* _accessControlEditorItemModule;

}

@property (nonatomic,readonly) HFMediaAccessControlEditorItemModule * accessControlEditorItemModule;              //@synthesize accessControlEditorItemModule=_accessControlEditorItemModule - In the implementation block
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 home:(id)arg2 ;
-(HFMediaAccessControlEditorItemModule *)accessControlEditorItemModule;
@end

