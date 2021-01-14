/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <KnowledgeGraphKit/MAFloatMatrix.h>

@class _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper;

@interface MAMutableFloatMatrix : MAFloatMatrix

@property (nonatomic,readonly) _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper * wrapper; 
+(Class)wrapperClass;
-(void)appendRow:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)subtractScalar:(float)arg1 ;
-(void)addScalar:(float)arg1 ;
-(void)setFloat:(float)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(void)subtractMatrix:(id)arg1 ;
@end

