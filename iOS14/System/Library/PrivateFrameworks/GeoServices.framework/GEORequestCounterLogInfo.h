/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface GEORequestCounterLogInfo : NSObject <NSSecureCoding> {

	NSDictionary* _dict;

}

@property (nonatomic,readonly) double oldestTimestamp; 
@property (nonatomic,readonly) SCD_Struct_GE0 requestType; 
+(BOOL)supportsSecureCoding;
+(id)counterLogInfoWithDictionary:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(SCD_Struct_GE0)requestType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)xmitBytes;
-(unsigned long long)recvBytes;
-(id)description;
-(id)_formattedString;
-(id)_formattedCSVString;
-(double)oldestTimestamp;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

