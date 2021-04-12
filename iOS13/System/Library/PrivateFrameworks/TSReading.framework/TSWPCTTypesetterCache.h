/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPCTTypesetterCache : NSObject {

	map<unsigned long, std::__1::shared_ptr<TSWPParagraphTypesetter>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<TSWPParagraphTypesetter> > > >* _typesetters;

}
-(void)dealloc;
-(void)clearCache;
-(void)removeTypesetterForParagraphIndex:(unsigned long long)arg1 ;
-(void)p_limitCacheSize:(unsigned long long)arg1 ;
-(shared_ptr<TSWPParagraphTypesetter>*)cachedTypesetterForParagraphIdentifier:(unsigned long long)arg1 ;
-(void)addTypesetterForParagraphIdentifier:(unsigned long long)arg1 typesetter:(shared_ptr<TSWPParagraphTypesetter>*)arg2 ;
@end

