/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SVVideoViewControllerConfiguration.h>

@class NUVideoViewControllerAdConfiguration;

@interface NUVideoViewControllerConfiguration : NSObject <NSCopying, SVVideoViewControllerConfiguration> {

	BOOL _preferredMuteState;
	BOOL _pagingAllowed;
	BOOL _sharingEnabled;
	NUVideoViewControllerAdConfiguration* _adConfiguration;

}

@property (getter=isSharingEnabled,nonatomic,readonly) BOOL sharingEnabled;                              //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (nonatomic,copy,readonly) NUVideoViewControllerAdConfiguration * adConfiguration;              //@synthesize adConfiguration=_adConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL preferredMuteState;                                                  //@synthesize preferredMuteState=_preferredMuteState - In the implementation block
@property (getter=isPagingAllowed,nonatomic,readonly) BOOL pagingAllowed;                                //@synthesize pagingAllowed=_pagingAllowed - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)preferredMuteState;
-(BOOL)isPagingAllowed;
-(BOOL)isSharingEnabled;
-(id)initWithSharingEnabled:(BOOL)arg1 preferredMuteState:(BOOL)arg2 pagingAllowed:(BOOL)arg3 adConfiguration:(id)arg4 ;
-(NUVideoViewControllerAdConfiguration *)adConfiguration;
@end

