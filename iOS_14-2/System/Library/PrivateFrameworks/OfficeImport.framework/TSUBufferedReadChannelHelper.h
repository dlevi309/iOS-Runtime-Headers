/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/TSUStreamReadChannel.h>

@class TSUBufferedReadChannel, NSString;

@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel> {

	TSUBufferedReadChannel* _bufferedReadChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)close;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(id)initWithBufferedReadChannel:(id)arg1 ;
@end

