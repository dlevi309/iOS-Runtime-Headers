/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)bytesReceived;
-(void)incrementBytesTransmitted:(unsigned long long)arg1 ;
-(void)incrementBytesReceived:(unsigned long long)arg1 ;
-(void)incrementCount:(unsigned long long)arg1 forResult:(unsigned char)arg2 ;
-(unsigned long long)countForResult:(unsigned char)arg1 ;
-(unsigned long long)bytesTransmitted;
@end

