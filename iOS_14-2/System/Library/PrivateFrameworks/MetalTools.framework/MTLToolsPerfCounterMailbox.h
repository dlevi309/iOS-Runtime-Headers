/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


#import <MetalTools/MetalTools-Structs.h>
@interface MTLToolsPerfCounterMailbox : NSObject {

	void* _requester;
	vector<std::__1::pair<NSData *, unsigned long>, std::__1::allocator<std::__1::pair<NSData *, unsigned long> > >* _data;
	wrap_iter<std::__1::pair<NSData *, unsigned long> *>* _iterator;

}
-(id)extractDataAndNumSamples:(unsigned long long*)arg1 forRequester:(void*)arg2 isLast:(BOOL*)arg3 ;
-(void)insertData:(id)arg1 andNumSamples:(unsigned long long)arg2 forRequester:(void*)arg3 ;
@end

