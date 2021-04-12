/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

