/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterVerdict.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEFilterAbsoluteVerdict : NEFilterVerdict <NSSecureCoding, NSCopying> {

	unsigned long long _inboundPassOffset;
	unsigned long long _inboundPeekOffset;
	unsigned long long _outboundPassOffset;
	unsigned long long _outboundPeekOffset;
	long long _statisticsReportFrequency;

}

@property (assign) unsigned long long inboundPassOffset;               //@synthesize inboundPassOffset=_inboundPassOffset - In the implementation block
@property (assign) unsigned long long inboundPeekOffset;               //@synthesize inboundPeekOffset=_inboundPeekOffset - In the implementation block
@property (assign) unsigned long long outboundPassOffset;              //@synthesize outboundPassOffset=_outboundPassOffset - In the implementation block
@property (assign) unsigned long long outboundPeekOffset;              //@synthesize outboundPeekOffset=_outboundPeekOffset - In the implementation block
@property (assign) long long statisticsReportFrequency;                //@synthesize statisticsReportFrequency=_statisticsReportFrequency - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)inboundPassOffset;
-(unsigned long long)outboundPassOffset;
-(long long)statisticsReportFrequency;
-(long long)filterAction;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatisticsReportFrequency:(long long)arg1 ;
-(void)setInboundPassOffset:(unsigned long long)arg1 ;
-(void)setInboundPeekOffset:(unsigned long long)arg1 ;
-(void)setOutboundPassOffset:(unsigned long long)arg1 ;
-(void)setOutboundPeekOffset:(unsigned long long)arg1 ;
-(unsigned long long)inboundPeekOffset;
-(unsigned long long)outboundPeekOffset;
-(id)initWithDrop:(BOOL)arg1 inboundPassOffset:(unsigned long long)arg2 inboundPeekOffset:(unsigned long long)arg3 outboundPassOffset:(unsigned long long)arg4 outboundPeekOffset:(unsigned long long)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

