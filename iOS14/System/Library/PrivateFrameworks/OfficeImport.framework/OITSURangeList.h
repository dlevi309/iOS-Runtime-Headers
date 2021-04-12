/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OITSURangeList : NSObject {

	vector<_NSRange, std::__1::allocator<_NSRange> >* mRangeList;

}

@property (nonatomic,readonly) unsigned long long count; 
-(void)reverse;
-(id)initWithString:(id)arg1 ;
-(void)insertRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(id)stringValue;
-(void)addRange:(NSRange)arg1 ;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(void)removeRangeAtIndex:(unsigned long long)arg1 ;
-(id)initWithRangeList:(id)arg1 ;
-(void)replaceWithRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(void)consolidate;
@end

