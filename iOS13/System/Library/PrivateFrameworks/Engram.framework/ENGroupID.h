/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(int)generation;
-(ENStableGroupID *)stableGroupID;
-(BOOL)compare:(id)arg1 withResult:(long long*)arg2 error:(id*)arg3 ;
-(id)initWithStableGroupID:(id)arg1 generation:(int)arg2 ;
@end

