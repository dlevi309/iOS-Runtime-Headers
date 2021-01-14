/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSURectList : NSObject {

	vector<CGRect, std::__1::allocator<CGRect> >* mRectList;

}

@property (nonatomic,readonly) unsigned long long count; 
+(id)rectListWithRect:(CGRect)arg1 ;
-(CGRect)rectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithRect:(CGRect)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRectList:(id)arg1 ;
@end

