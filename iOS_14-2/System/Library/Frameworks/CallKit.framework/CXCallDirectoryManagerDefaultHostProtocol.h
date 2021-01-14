/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@protocol CXCallDirectoryManagerDefaultHostProtocol <NSObject>
@required
-(oneway void)getExtensionsWithReply:(/*^block*/id)arg1;
-(oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)setPrioritizedExtensionIdentifiers:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)setEnabled:(BOOL)arg1 forExtensionWithIdentifier:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)reloadExtensionWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)launchCallDirectorySettingsWithReply:(/*^block*/id)arg1;

@end

