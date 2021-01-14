/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemAccessLogInternal, NSArray;

@interface AVPlayerItemAccessLog : NSObject <NSCopying> {

	AVPlayerItemAccessLogInternal* _playerItemAccessLog;

}

@property (nonatomic,readonly) unsigned long long extendedLogDataStringEncoding; 
@property (nonatomic,readonly) NSArray * events; 
-(id)init;
-(id)_common_init;
-(id)_accessLogArray;
-(id)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
-(id)description;
-(NSArray *)events;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLogArray:(id)arg1 ;
-(void)dealloc;
@end

