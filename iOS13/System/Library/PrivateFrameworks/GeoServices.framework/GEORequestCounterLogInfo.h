/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface GEORequestCounterLogInfo : NSObject <NSSecureCoding> {

	NSDictionary* _dict;

}

@property (nonatomic,readonly) double oldestTimestamp; 
@property (nonatomic,readonly) unsigned char requestType; 
+(BOOL)supportsSecureCoding;
+(id)counterLogInfoWithDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned char)requestType;
-(id)_formattedString;
-(unsigned long long)xmitBytes;
-(unsigned long long)recvBytes;
-(id)_formattedCSVString;
-(double)oldestTimestamp;
@end

