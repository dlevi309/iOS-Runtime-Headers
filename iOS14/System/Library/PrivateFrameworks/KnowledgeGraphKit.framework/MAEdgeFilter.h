/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MAElementFilter.h>

@class KGEdgeFilter, MARelation;

@interface MAEdgeFilter : MAElementFilter

@property (nonatomic,readonly) KGEdgeFilter * kgEdgeFilter; 
@property (nonatomic,readonly) MARelation * outRelation; 
@property (nonatomic,readonly) MARelation * inRelation; 
@property (nonatomic,readonly) MARelation * anyDirectionRelation; 
+(BOOL)scanInstance:(out id*)arg1 withScanner:(id)arg2 ;
-(MARelation *)anyDirectionRelation;
-(MARelation *)outRelation;
-(MARelation *)inRelation;
-(void)appendVisualStringToString:(id)arg1 ;
-(BOOL)matchesEdge:(id)arg1 ;
-(KGEdgeFilter *)kgEdgeFilter;
@end

