/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableDictionary;

@interface PGPhotoChangeToGraphChangeConverter : NSObject {

	NSMutableDictionary* _entityTranslatorByEntityName;

}

@property (nonatomic,retain) NSMutableDictionary * entityTranslatorByEntityName;              //@synthesize entityTranslatorByEntityName=_entityTranslatorByEntityName - In the implementation block
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)setEntityTranslatorByEntityName:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)entityTranslatorByEntityName;
-(void)_registerTranslatorsWithPhotoLibrary:(id)arg1 ;
-(id)graphChangesWithPhotoChange:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

