/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OITSURectList : NSObject {

	vector<CGRect, std::__1::allocator<CGRect> >* mRectList;

}

@property (nonatomic,readonly) unsigned long long count; 
+(id)rectListWithDifference:(CGRect)arg1 withRect:(CGRect)arg2 ;
-(CGRect)rectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)addRect:(CGRect)arg1 ;
-(id)initWithRect:(CGRect)arg1 ;
-(id)initWithRectList:(id)arg1 ;
-(void)insertRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 ;
@end

