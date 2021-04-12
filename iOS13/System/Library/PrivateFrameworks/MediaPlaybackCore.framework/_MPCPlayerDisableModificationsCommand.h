/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerDisableModificationsCommand.h>

@class NSString;

@interface _MPCPlayerDisableModificationsCommand : _MPCPlayerCommand <MPCPlayerDisableModificationsCommand> {

	BOOL _disabled;

}

@property (assign,setter=_setDisabled:,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDisabled;
-(id)setDisabled:(BOOL)arg1 ;
-(void)_setDisabled:(BOOL)arg1 ;
@end

