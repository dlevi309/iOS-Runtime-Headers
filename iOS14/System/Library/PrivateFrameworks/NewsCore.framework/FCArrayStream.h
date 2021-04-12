/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCStreaming.h>

@class NSArray, NSString;

@interface FCArrayStream : NSObject <FCStreaming> {

	NSArray* _array;
	unsigned long long _index;

}

@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isFinished;
-(id)initWithArray:(id)arg1 ;
@end

