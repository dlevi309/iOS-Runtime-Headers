/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingCore.framework/HearingCore
*/


@class HCSettings, NSMutableArray;

@interface HCSettingsListenerHelper : NSObject {

	id _listenerAddress;
	HCSettings* _delegate;
	NSMutableArray* _selectorKeys;

}
-(id)initWithListenerAddress:(id)arg1 andDelegate:(id)arg2 ;
-(void)addSelectorKey:(SEL)arg1 ;
-(void)dealloc;
@end

