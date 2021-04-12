/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)_timestampValues;
-(BOOL)compare:(id)arg1 comparisonResult:(out long long*)arg2 ;
-(long long)compare:(id)arg1 isComparable:(out BOOL*)arg2 ;
-(id)timestampIncreasingClientIdentifier:(id)arg1 ;
-(id)initInitialTimestampWithClientIdentifier:(id)arg1 ;
-(id)_initWithTimestampValues:(id)arg1 ;
-(BOOL)_compare:(id)arg1 comparisonResult:(out long long*)arg2 isOppositeCheck:(BOOL)arg3 ;
@end

