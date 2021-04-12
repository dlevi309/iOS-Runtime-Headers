/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSURectList.h>

@interface TSUMutableRectList : TSURectList
-(void)addRect:(CGRect)arg1 ;
-(void)setList:(id)arg1 ;
-(void)applyTransform:(CGAffineTransform)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)insertRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 ;
-(void)makeEmpty;
-(void)addRectList:(id)arg1 ;
-(void)replaceRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 ;
@end

