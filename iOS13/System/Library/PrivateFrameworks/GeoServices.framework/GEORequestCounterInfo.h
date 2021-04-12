/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface GEORequestCounterInfo : NSObject <NSSecureCoding> {

	NSDictionary* _requestTypeStatistics;
	unsigned long long _bytesTransmitted;
	unsigned long long _bytesReceived;

}

@property (nonatomic,readonly) NSArray * requestTypes; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)_formattedString;
-(unsigned long long)xmitBytes;
-(unsigned long long)recvBytes;
-(unsigned long long)xmitBytesForType:(unsigned char)arg1 ;
-(unsigned long long)recvBytesForType:(unsigned char)arg1 ;
-(unsigned long long)numberOfRequestsForType:(unsigned char)arg1 result:(unsigned char)arg2 ;
-(void)_generateAggregateStatistics;
-(NSArray *)requestTypes;
-(id)nonZeroResultTypesForType:(unsigned char)arg1 ;
@end

