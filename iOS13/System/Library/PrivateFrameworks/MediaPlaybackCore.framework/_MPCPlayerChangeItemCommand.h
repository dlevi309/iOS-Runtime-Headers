/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerChangeItemCommand.h>

@class NSString;

@interface _MPCPlayerChangeItemCommand : _MPCPlayerCommand <MPCPlayerChangeItemCommand> {

	unsigned long long _changeItemSupport;

}

@property (nonatomic,readonly) unsigned long long changeItemSupport;              //@synthesize changeItemSupport=_changeItemSupport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previousItem;
-(id)nextItem;
-(id)initWithResponse:(id)arg1 changeItemSupport:(unsigned long long)arg2 ;
-(id)previousItemDeferringToPlaybackQueuePosition;
-(id)previousSection;
-(id)previousChapter;
-(id)nextSection;
-(id)nextChapter;
-(id)changeToSection:(id)arg1 ;
-(id)changeToItem:(id)arg1 ;
-(unsigned long long)changeItemSupport;
@end

