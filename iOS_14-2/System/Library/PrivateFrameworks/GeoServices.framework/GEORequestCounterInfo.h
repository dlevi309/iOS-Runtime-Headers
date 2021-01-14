/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface GEORequestCounterInfo : NSObject <NSSecureCoding> {

	NSDictionary* _requestTypeStatistics;
	unsigned long long _bytesTransmitted;
	unsigned long long _bytesReceived;

}

@property (nonatomic,readonly) NSArray * requestTypes; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)xmitBytes;
-(unsigned long long)recvBytes;
-(id)description;
-(id)_formattedString;
-(NSArray *)requestTypes;
-(void)_generateAggregateStatistics;
-(unsigned long long)numberOfRequestsForType:(SCD_Struct_GE0)arg1 result:(unsigned char)arg2 ;
-(unsigned long long)xmitBytesForType:(SCD_Struct_GE0)arg1 ;
-(unsigned long long)recvBytesForType:(SCD_Struct_GE0)arg1 ;
-(void)enumerateRequestTypes:(/*^block*/id)arg1 ;
-(id)nonZeroResultTypesForType:(SCD_Struct_GE0)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

