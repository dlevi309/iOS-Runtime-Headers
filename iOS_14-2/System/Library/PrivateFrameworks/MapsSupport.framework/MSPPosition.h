/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MSPPositionSignpost.h>

@class NSArray, NSData, NSString;

@interface MSPPosition : NSObject <NSSecureCoding, NSCopying, MSPPositionSignpost> {

	NSArray* _pathComponents;

}

@property (nonatomic,readonly) NSData * serializedRepresentation; 
@property (getter=_pathComponents,readonly) NSArray * pathComponents;              //@synthesize pathComponents=_pathComponents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_pathComponentsForSignpost:(id)arg1 ;
+(id)positionBetweenPosition:(id)arg1 andPosition:(id)arg2 clientIdentifier:(id)arg3 ;
+(id)finalPositionWithClientIdentifier:(id)arg1 ;
+(BOOL)_randBoolForStrategy:(unsigned long long)arg1 ;
+(id)finalSignpostWithClientIdentifier:(id)arg1 ;
+(long long)_strategyForAllocationAtDepth:(unsigned long long)arg1 ;
+(id)initialSignpostWithClientIdentifier:(id)arg1 ;
+(id)positionBetweenSignpost:(id)arg1 andSignpost:(id)arg2 clientIdentifier:(id)arg3 ;
+(BOOL)_hasSpaceForInsertionAtDepth:(unsigned long long)arg1 betweenEarlierPosition:(id)arg2 andLaterPosition:(id)arg3 clientIdentifier:(id)arg4 ;
+(id)initialPositionWithClientIdentifier:(id)arg1 ;
-(NSData *)serializedRepresentation;
-(long long)compare:(id)arg1 ;
-(id)_initWithPathComponents:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isFinal;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(BOOL)_isInitial;
-(id)_positionByTruncatingOrExtendingToDepth:(unsigned long long)arg1 clientIdentifier:(id)arg2 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_addingDistanceAtEqualDepth:(long long)arg1 clientIdentifier:(id)arg2 ;
-(id)_pathComponents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithIndexes:(id)arg1 originIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

