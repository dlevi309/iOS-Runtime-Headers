/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphEntityTranslator.h>

@interface PGGraphHighlightTranslator : PGGraphEntityTranslator
+(id)entityClassName;
+(BOOL)includesRelationshipChanges;
-(id)graphChangesForInsertedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)graphChangesForDeletedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)highlightUpdateDateProperties;
-(id)highlightUpdateTypeProperties;
@end

