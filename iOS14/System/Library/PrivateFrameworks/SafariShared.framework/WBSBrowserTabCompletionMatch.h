/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSTabCompletionMatch.h>

@class NSUUID;

@interface WBSBrowserTabCompletionMatch : WBSTabCompletionMatch {

	NSUUID* _tabUUID;
	NSUUID* _windowUUID;
	unsigned long long _tabIndex;

}

@property (nonatomic,readonly) NSUUID * tabUUID;                         //@synthesize tabUUID=_tabUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * windowUUID;                      //@synthesize windowUUID=_windowUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long tabIndex;              //@synthesize tabIndex=_tabIndex - In the implementation block
-(NSUUID *)tabUUID;
-(NSUUID *)windowUUID;
-(unsigned long long)tabIndex;
-(id)parsecDomainIdentifier;
-(id)initWithTabUUID:(id)arg1 windowUUID:(id)arg2 tabIndex:(unsigned long long)arg3 userTypedString:(id)arg4 tabURL:(id)arg5 tabTitle:(id)arg6 forQueryID:(long long)arg7 ;
@end

