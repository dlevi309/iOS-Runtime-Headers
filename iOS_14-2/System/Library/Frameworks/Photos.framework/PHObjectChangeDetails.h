/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PHObject;

@interface PHObjectChangeDetails : NSObject {

	PHObject* _objectBeforeChanges;
	PHObject* _objectAfterChanges;
	BOOL _assetContentChanged;
	BOOL _assetCollectionTitlePropertiesChanged;

}

@property (nonatomic,readonly) BOOL assetCollectionTitlePropertiesChanged; 
@property (readonly) PHObject * objectBeforeChanges; 
@property (readonly) PHObject * objectAfterChanges; 
@property (readonly) BOOL assetContentChanged; 
@property (readonly) BOOL objectWasDeleted; 
-(id)description;
-(id)initWithPHObject:(id)arg1 ;
-(PHObject *)objectBeforeChanges;
-(PHObject *)objectAfterChanges;
-(void)_calculateDiffs;
-(BOOL)assetContentChanged;
-(BOOL)assetCollectionTitlePropertiesChanged;
-(BOOL)objectWasDeleted;
@end

