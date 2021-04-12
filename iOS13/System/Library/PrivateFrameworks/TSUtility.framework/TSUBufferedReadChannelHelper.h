/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUStreamReadChannel.h>

@class TSUBufferedReadChannel, NSString;

@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel> {

	TSUBufferedReadChannel* _bufferedReadChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithBufferedReadChannel:(id)arg1 ;
@end

