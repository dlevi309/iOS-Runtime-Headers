/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class NSDictionary, NSArray;

@interface PXPersonsSectionedDataSource : PXSectionedDataSource {

	NSDictionary* _faceTiles;
	NSArray* _personsSections;

}

@property (nonatomic,copy,readonly) NSArray * personsSections;              //@synthesize personsSections=_personsSections - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * faceTiles;               //@synthesize faceTiles=_faceTiles - In the implementation block
@property (nonatomic,readonly) long long totalItemCount; 
-(long long)totalItemCount;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)objectsInIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(NSDictionary *)faceTiles;
-(NSArray *)personsSections;
-(id)faceTileForIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)initWithPersonsSections:(id)arg1 faceTiles:(id)arg2 ;
@end

