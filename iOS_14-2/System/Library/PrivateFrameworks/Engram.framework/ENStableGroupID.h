/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/

#import <Engram/Engram-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSData;

@interface ENStableGroupID : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _uuid;

}

@property (nonatomic,retain) NSUUID * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)stableGroupIDLength;
+(id)stableGroupIDWithCurrentTime;
-(long long)compare:(id)arg1 ;
-(NSData *)dataRepresentation;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(id)_mutableDataRepresentation;
-(int)customUUIDCompare:(unsigned char)arg1 u2:(unsigned char)arg2 ;
@end

