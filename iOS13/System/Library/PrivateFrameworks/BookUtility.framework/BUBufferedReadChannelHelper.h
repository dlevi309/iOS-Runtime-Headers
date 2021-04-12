/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/

#import <libobjc.A.dylib/BUStreamReadChannel.h>

@class BUBufferedReadChannel, NSString;

@interface BUBufferedReadChannelHelper : NSObject <BUStreamReadChannel> {

	BUBufferedReadChannel* _bufferedReadChannel;

}

@property (assign,nonatomic,__weak) BUBufferedReadChannel * bufferedReadChannel;              //@synthesize bufferedReadChannel=_bufferedReadChannel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)close;
-(id)initWithBufferedReadChannel:(id)arg1 ;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(BUBufferedReadChannel *)bufferedReadChannel;
-(void)setBufferedReadChannel:(BUBufferedReadChannel *)arg1 ;
@end

