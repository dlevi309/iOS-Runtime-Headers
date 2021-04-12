/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SVVideoViewControllerConfiguration.h>

@protocol SVVideoViewControllerConfiguration <NFCopying>
@property (nonatomic,readonly) BOOL preferredMuteState; 
@property (getter=isPagingAllowed,nonatomic,readonly) BOOL pagingAllowed; 
@required
-(BOOL)preferredMuteState;
-(BOOL)isPagingAllowed;

@end


@interface SVVideoViewControllerConfiguration : NSObject <NSCopying, SVVideoViewControllerConfiguration> {

	BOOL _preferredMuteState;
	BOOL _pagingAllowed;

}

@property (nonatomic,readonly) BOOL preferredMuteState;                                //@synthesize preferredMuteState=_preferredMuteState - In the implementation block
@property (getter=isPagingAllowed,nonatomic,readonly) BOOL pagingAllowed;              //@synthesize pagingAllowed=_pagingAllowed - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)preferredMuteState;
-(BOOL)isPagingAllowed;
-(id)initWithPreferredMuteState:(BOOL)arg1 pagingAllowed:(BOOL)arg2 ;
@end

