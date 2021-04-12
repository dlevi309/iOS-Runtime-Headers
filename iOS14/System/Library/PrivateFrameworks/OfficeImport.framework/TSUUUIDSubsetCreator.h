/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class TSUUUIDSetStore, NSMutableDictionary;

@interface TSUUUIDSubsetCreator : NSObject {

	TSUUUIDSetStore* _uuidSetStore;
	vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _baseUuidVector;
	NSMutableDictionary* _createdSubsetsByRange;

}

@property (readonly) const vector<TSU::UUIDData<TSP::UUIDData>* baseUuidVector;              //@synthesize baseUuidVector=_baseUuidVector - In the implementation block
@property (readonly) TSUUUIDSetStore * uuidSetStore;                                         //@synthesize uuidSetStore=_uuidSetStore - In the implementation block
-(id)initWithUuidSetStore:(id)arg1 baseUuidVector:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 ;
-(unsigned)uuidSetStoreIndexForIndexesInRange:(NSRange)arg1 ;
-(const vector<TSU::UUIDData<TSP::UUIDData>*)baseUuidVector;
-(TSUUUIDSetStore *)uuidSetStore;
@end

