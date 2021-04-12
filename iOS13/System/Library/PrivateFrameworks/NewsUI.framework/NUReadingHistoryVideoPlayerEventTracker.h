/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>

@protocol NUVideoReadingHistory;
@class NSString;

@interface NUReadingHistoryVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker> {

	id<NUVideoReadingHistory> _readingHistory;

}

@property (nonatomic,readonly) id<NUVideoReadingHistory> readingHistory;              //@synthesize readingHistory=_readingHistory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<NUVideoReadingHistory>)readingHistory;
-(void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(id)initWithReadingHistory:(id)arg1 ;
@end

