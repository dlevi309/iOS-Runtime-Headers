/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphEntityTranslator.h>

@interface PGGraphHighlightTranslator : PGGraphEntityTranslator
+(BOOL)includesRelationshipChanges;
+(id)entityClassName;
-(id)graphChangesForInsertedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)highlightUpdateTypeProperties;
-(id)highlightUpdateDateProperties;
-(id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)graphChangesForDeletedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

