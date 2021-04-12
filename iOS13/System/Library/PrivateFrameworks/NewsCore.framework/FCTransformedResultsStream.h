/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCStreaming.h>

@protocol FCStreaming;
@class NSString;

@interface FCTransformedResultsStream : NSObject <FCStreaming> {

	id<FCStreaming> _stream;
	/*^block*/id _asyncTransformBlock;

}

@property (nonatomic,retain) id<FCStreaming> stream;                         //@synthesize stream=_stream - In the implementation block
@property (nonatomic,copy) id asyncTransformBlock;                           //@synthesize asyncTransformBlock=_asyncTransformBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
-(BOOL)isFinished;
-(id<FCStreaming>)stream;
-(void)setStream:(id<FCStreaming>)arg1 ;
-(id)initWithStream:(id)arg1 asyncTransformBlock:(/*^block*/id)arg2 ;
-(id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)asyncTransformBlock;
-(void)setAsyncTransformBlock:(id)arg1 ;
@end

