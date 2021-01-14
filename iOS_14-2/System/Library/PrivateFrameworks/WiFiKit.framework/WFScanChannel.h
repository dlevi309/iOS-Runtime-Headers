/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFScanableChannel.h>

@class NSString;

@interface WFScanChannel : NSObject <WFScanableChannel> {

	unsigned long long _channel;
	unsigned long long _flags;

}

@property (assign,nonatomic) unsigned long long channel;              //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                //@synthesize flags=_flags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)flags;
-(void)setChannel:(unsigned long long)arg1 ;
-(unsigned long long)channel;
-(NSString *)description;
-(void)setFlags:(unsigned long long)arg1 ;
-(id)initWithChannel:(long long)arg1 flags:(long long)arg2 ;
@end

