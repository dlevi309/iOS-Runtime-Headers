/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying, NSSecureCoding> {

	NSDictionary* _kv;
	NSDictionary* _storeKVDict;
	unsigned long long _hash;

}

@property (nonatomic,readonly) unsigned long long hash;                //@synthesize hash=_hash - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
+(BOOL)supportsSecureCoding;
+(id)createKnowledgeVectorDictionaryFromString:(id)arg1 ;
+(id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isZeroVector;
-(unsigned long long)length;
-(id)allPeerIDs;
-(id)initWithStoreKnowledgeVectorDictionary:(id)arg1 ;
-(void)updateWithKnowledgeVector:(id)arg1 ;
-(BOOL)isAncestorOfKnowledgeVector:(id)arg1 ;
-(BOOL)conflictsWithKnowledgeVector:(id)arg1 ;
-(id)createStoreKnowledgeVectorDictionary;
-(id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1 ;
-(id)createKnowledgeVectorString;
-(id)newKnowledgeVectorBySubtractingVector:(id)arg1 ;
-(id)initWithKnowledgeVectorDictionary:(id)arg1 ;
-(id)description;
-(id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1 ;
-(id)createAncestorVectorForConflictingVector:(id)arg1 ;
-(id)newKnowledgeVectorByIncrementingPeerWithID:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasPeerIDInCommonWith:(id)arg1 ;
-(BOOL)canMergeWithKnowledgeVector:(id)arg1 ;
-(id)initFromCopy:(id)arg1 storeKVDict:(id)arg2 hash:(unsigned long long)arg3 ;
-(id)createSetOfAllPeerIDsWithOtherVector:(id)arg1 ;
-(void)_updateHash;
-(id)initWithKnowledgeVectorDictionary:(id)arg1 andStoreKnowledgeVectorDictionary:(id)arg2 ;
-(id)initWithKnowledgeVectorString:(id)arg1 ;
-(BOOL)isDescendantOfKnowledgeVector:(id)arg1 ;
-(void)decrementToMinimumWithKnowledgeVector:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)transactionNumberForPeerID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

