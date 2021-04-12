/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_calculateDiffs;
-(id)initWithPHObject:(id)arg1 ;
-(PHObject *)objectBeforeChanges;
-(PHObject *)objectAfterChanges;
-(BOOL)assetContentChanged;
-(BOOL)assetCollectionTitlePropertiesChanged;
-(BOOL)objectWasDeleted;
@end

