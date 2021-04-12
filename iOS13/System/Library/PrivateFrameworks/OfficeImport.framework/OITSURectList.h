/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OITSURectList : NSObject {

	vector<CGRect, std::__1::allocator<CGRect> >* mRectList;

}

@property (nonatomic,readonly) unsigned long long count; 
+(id)rectListWithDifference:(CGRect)arg1 withRect:(CGRect)arg2 ;
-(unsigned long long)count;
-(id)initWithRect:(CGRect)arg1 ;
-(void)addRect:(CGRect)arg1 ;
-(CGRect)rectAtIndex:(unsigned long long)arg1 ;
-(void)insertRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithRectList:(id)arg1 ;
@end

