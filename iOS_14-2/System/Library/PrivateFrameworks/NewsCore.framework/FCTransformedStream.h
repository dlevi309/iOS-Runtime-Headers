/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCStreaming.h>

@protocol FCStreaming;
@class NSString;

@interface FCTransformedStream : NSObject <FCStreaming> {

	/*^block*/id _transformBlock;
	id<FCStreaming> _stream;

}

@property (nonatomic,copy) id transformBlock;                                //@synthesize transformBlock=_transformBlock - In the implementation block
@property (nonatomic,retain) id<FCStreaming> stream;                         //@synthesize stream=_stream - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCStreaming>)stream;
-(void)setStream:(id<FCStreaming>)arg1 ;
-(id)transformBlock;
-(void)setTransformBlock:(id)arg1 ;
-(id)init;
-(id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isFinished;
-(id)initWithStream:(id)arg1 transformBlock:(/*^block*/id)arg2 ;
@end

