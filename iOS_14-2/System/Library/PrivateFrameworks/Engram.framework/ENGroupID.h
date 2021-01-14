/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/

#import <Engram/Engram-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ENStableGroupID, NSData;

@interface ENGroupID : NSObject <NSSecureCoding, NSCopying> {

	int _generation;
	ENStableGroupID* _stableGroupID;

}

@property (nonatomic,readonly) ENStableGroupID * stableGroupID;              //@synthesize stableGroupID=_stableGroupID - In the implementation block
@property (nonatomic,readonly) int generation;                               //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)supportsSecureCoding;
-(int)generation;
-(NSData *)dataRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ENStableGroupID *)stableGroupID;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)compare:(id)arg1 withResult:(long long*)arg2 error:(id*)arg3 ;
-(id)initWithStableGroupID:(id)arg1 generation:(int)arg2 ;
@end

