/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFetchOperation.h>

@protocol FCContentContext;
@class FCArticleAudioTrack;

@interface FCAudioTrackFetchOperation : FCFetchOperation {

	id<FCContentContext> _context;
	FCArticleAudioTrack* _audioTrack;

}

@property (nonatomic,readonly) id<FCContentContext> context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) FCArticleAudioTrack * audioTrack;              //@synthesize audioTrack=_audioTrack - In the implementation block
-(void)performOperation;
-(id<FCContentContext>)context;
-(FCArticleAudioTrack *)audioTrack;
-(id)initWithContext:(id)arg1 audioTrack:(id)arg2 ;
@end

