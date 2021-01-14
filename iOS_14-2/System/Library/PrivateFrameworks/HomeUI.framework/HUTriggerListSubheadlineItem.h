/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HUItemMapsToView.h>

@protocol HasRemoteAccessState;
@interface HUTriggerListSubheadlineItem : HFItem <HUItemMapsToView> {

	id<HasRemoteAccessState> _remoteAccessInfo;

}

@property (nonatomic,readonly) id<HasRemoteAccessState> remoteAccessInfo;              //@synthesize remoteAccessInfo=_remoteAccessInfo - In the implementation block
-(id)_attributedDescription;
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HasRemoteAccessState>)remoteAccessInfo;
-(id)resultsForRemoteAccessState:(unsigned long long)arg1 ;
-(id)_attributedDescriptionForNoRemoteAccess;
-(Class)mapsToViewClass;
-(id)initWithRemoteAccessInfo:(id)arg1 ;
@end

