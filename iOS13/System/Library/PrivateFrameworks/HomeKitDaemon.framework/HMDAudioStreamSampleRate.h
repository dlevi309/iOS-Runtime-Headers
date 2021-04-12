/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMDAudioStreamSampleRate : NSObject <NSCopying> {

	long long _sampleRate;

}

@property (assign,nonatomic) long long sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSampleRate:(long long)arg1 ;
-(long long)sampleRate;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithSampleRate:(long long)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
@end

