/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MAElementFilter.h>

@class KGNodeFilter, MARelation;

@interface MANodeFilter : MAElementFilter

@property (nonatomic,readonly) KGNodeFilter * kgNodeFilter; 
@property (nonatomic,readonly) MARelation * relation; 
+(BOOL)scanInstance:(out id*)arg1 withScanner:(id)arg2 ;
-(MARelation *)relation;
-(void)appendVisualStringToString:(id)arg1 ;
-(BOOL)matchesNode:(id)arg1 ;
-(KGNodeFilter *)kgNodeFilter;
@end

