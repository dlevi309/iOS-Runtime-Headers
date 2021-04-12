/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableDictionary;

@interface PGPhotoChangeToGraphChangeConverter : NSObject {

	NSMutableDictionary* _entityTranslatorByEntityName;

}

@property (nonatomic,retain) NSMutableDictionary * entityTranslatorByEntityName;              //@synthesize entityTranslatorByEntityName=_entityTranslatorByEntityName - In the implementation block
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)_registerTranslatorsWithPhotoLibrary:(id)arg1 ;
-(id)graphChangesWithPhotoChange:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)entityTranslatorByEntityName;
-(void)setEntityTranslatorByEntityName:(NSMutableDictionary *)arg1 ;
@end

