/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OITSURangeList : NSObject {

	vector<_NSRange, std::__1::allocator<_NSRange> >* mRangeList;

}

@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(id)stringValue;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(void)reverse;
-(void)addRange:(NSRange)arg1 ;
-(void)removeRangeAtIndex:(unsigned long long)arg1 ;
-(void)insertRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithRangeList:(id)arg1 ;
-(void)replaceWithRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(void)consolidate;
@end

