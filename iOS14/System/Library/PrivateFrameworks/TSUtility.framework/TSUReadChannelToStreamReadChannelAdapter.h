/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUReadChannel.h>
#import <TSUtility/TSUStreamReadChannel.h>

@protocol TSUReadChannel;
@class NSString;

@interface TSUReadChannelToStreamReadChannelAdapter : NSObject <TSUReadChannel, TSUStreamReadChannel> {

	id<TSUReadChannel> _readChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

