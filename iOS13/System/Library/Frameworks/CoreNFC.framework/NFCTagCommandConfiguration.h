/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <CoreNFC/CoreNFC-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NFCTagCommandConfiguration : NSObject <NSCopying> {

	unsigned long long _maximumRetries;
	double _retryInterval;

}

@property (assign,nonatomic) unsigned long long maximumRetries;              //@synthesize maximumRetries=_maximumRetries - In the implementation block
@property (assign,nonatomic) double retryInterval;                           //@synthesize retryInterval=_retryInterval - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)retryInterval;
-(void)setRetryInterval:(double)arg1 ;
-(void)setMaximumRetries:(unsigned long long)arg1 ;
-(unsigned long long)maximumRetries;
@end

