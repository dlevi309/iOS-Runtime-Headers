/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)previousSection;
-(id)previousChapter;
-(id)nextSection;
-(id)nextItem;
-(id)changeToSection:(id)arg1 ;
-(id)nextChapter;
-(id)initWithResponse:(id)arg1 changeItemSupport:(unsigned long long)arg2 ;
-(id)changeToItem:(id)arg1 ;
-(unsigned long long)changeItemSupport;
-(id)previousItemDeferringToPlaybackQueuePosition;
-(id)previousItem;
@end

