/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PFUbiquityLocation, PFUbiquityKnowledgeVector, NSMutableDictionary, NSDictionary;

@interface PFUbiquityBaselineMetadata : NSObject <NSCoding, NSSecureCoding> {

	NSString* _storeName;
	NSString* _authorPeerID;
	NSString* _modelVersionHash;
	PFUbiquityLocation* _rootLocation;
	PFUbiquityKnowledgeVector* _pKV;
	PFUbiquityKnowledgeVector* _kv;
	NSMutableDictionary* _peerRanges;

}

@property (readonly) NSString * storeName;                                                       //@synthesize storeName=_storeName - In the implementation block
@property (readonly) NSString * authorPeerID;                                                    //@synthesize authorPeerID=_authorPeerID - In the implementation block
@property (readonly) NSString * modelVersionHash;                                                //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (readonly) PFUbiquityLocation * rootLocation;                                          //@synthesize rootLocation=_rootLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * previousKnowledgeVector;              //@synthesize pKV=_pKV - In the implementation block
@property (readonly) PFUbiquityKnowledgeVector * knowledgeVector;                                //@synthesize kv=_kv - In the implementation block
@property (readonly) NSDictionary * peerRanges;                                                  //@synthesize peerRanges=_peerRanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(NSString *)modelVersionHash;
-(NSString *)storeName;
-(PFUbiquityKnowledgeVector *)knowledgeVector;
-(void)setKnowledgeVector:(PFUbiquityKnowledgeVector *)arg1 ;
-(NSDictionary *)peerRanges;
-(BOOL)gatherMetadataWithStore:(id)arg1 andError:(id*)arg2 ;
-(NSString *)authorPeerID;
-(PFUbiquityKnowledgeVector *)previousKnowledgeVector;
-(id)createNewLocalRangeWithRangeStart:(unsigned long long)arg1 andRangeEnd:(unsigned long long)arg2 forEntityNamed:(id)arg3 ;
-(void)addDictionaryForPeerRange:(id)arg1 ;
-(id)createPeerRangeDictionary:(id)arg1 ;
-(void)setPreviousKnowledgeVectorFromCurrentMetadata:(id)arg1 ;
-(void)_migrateToModelVersionHash:(id)arg1 ;
-(PFUbiquityLocation *)rootLocation;
@end

