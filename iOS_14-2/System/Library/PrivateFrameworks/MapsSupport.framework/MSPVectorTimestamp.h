/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData;

@interface MSPVectorTimestamp : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _timestampValues;

}

@property (nonatomic,readonly) NSData * serializedRepresentation; 
@property (getter=_timestampValues,nonatomic,readonly) NSDictionary * timestampValues; 
+(BOOL)supportsSecureCoding;
+(id)timestampAfterTimestamps:(id)arg1 increasingClientIdentifier:(id)arg2 ;
-(NSData *)serializedRepresentation;
-(id)init;
-(id)timestampIncreasingClientIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_compare:(id)arg1 comparisonResult:(out long long*)arg2 isOppositeCheck:(BOOL)arg3 ;
-(id)_initWithTimestampValues:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(BOOL)compare:(id)arg1 comparisonResult:(out long long*)arg2 ;
-(id)description;
-(id)_timestampValues;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)compare:(id)arg1 isComparable:(out BOOL*)arg2 ;
-(id)initInitialTimestampWithClientIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

