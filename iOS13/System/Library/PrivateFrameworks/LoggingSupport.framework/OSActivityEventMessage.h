/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/OSActivityEvent.h>

@class NSData, NSMutableArray, NSString;

@interface OSActivityEventMessage : OSActivityEvent {

	NSData* _bufferPrivateData;
	NSData* _bufferData;

}

@property (nonatomic,readonly) NSMutableArray * arguments; 
@property (copy,readonly) NSString * format; 
-(NSMutableArray *)arguments;
-(NSString *)format;
-(void)fillEventData:(const char*)arg1 length:(unsigned long long)arg2 privateBuffer:(const char*)arg3 length:(unsigned long long)arg4 ;
@end

