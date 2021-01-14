/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface GEORequestCounterStatistics : NSObject <NSSecureCoding> {

	unsigned long long _bytesTransmitted;
	unsigned long long _bytesReceived;
	NSMutableDictionary* _resultCounts;

}

@property (nonatomic,readonly) unsigned long long bytesTransmitted;              //@synthesize bytesTransmitted=_bytesTransmitted - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesReceived;                 //@synthesize bytesReceived=_bytesReceived - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)incrementBytesTransmitted:(unsigned long long)arg1 ;
-(void)incrementBytesReceived:(unsigned long long)arg1 ;
-(void)incrementCount:(unsigned long long)arg1 forResult:(unsigned char)arg2 ;
-(unsigned long long)countForResult:(unsigned char)arg1 ;
-(unsigned long long)bytesTransmitted;
-(unsigned long long)bytesReceived;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

