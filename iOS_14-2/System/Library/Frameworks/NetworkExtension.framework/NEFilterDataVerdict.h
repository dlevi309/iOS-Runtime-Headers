/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterVerdict.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEFilterDataVerdict : NEFilterVerdict <NSSecureCoding, NSCopying> {

	long long _statisticsReportFrequency;
	unsigned long long _passBytes;
	unsigned long long _peekBytes;

}

@property (assign) unsigned long long passBytes;                     //@synthesize passBytes=_passBytes - In the implementation block
@property (assign) unsigned long long peekBytes;                     //@synthesize peekBytes=_peekBytes - In the implementation block
@property (assign) long long statisticsReportFrequency;              //@synthesize statisticsReportFrequency=_statisticsReportFrequency - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allowVerdict;
+(id)dropVerdict;
+(id)needRulesVerdict;
+(id)dataVerdictWithPassBytes:(unsigned long long)arg1 peekBytes:(unsigned long long)arg2 ;
+(id)pauseVerdict;
+(id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)passBytes;
-(unsigned long long)peekBytes;
-(long long)statisticsReportFrequency;
-(long long)filterAction;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatisticsReportFrequency:(long long)arg1 ;
-(void)setPassBytes:(unsigned long long)arg1 ;
-(void)setPeekBytes:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

