/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLAssetContainerList.h>

@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList> {

	NSOrderedSet* _containers;

}

@property (nonatomic,retain) NSOrderedSet * containers;                         //@synthesize containers=_containers - In the implementation block
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSOrderedSet *)containers;
-(unsigned long long)containersCount;
-(id)managedObjectContext;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(id)photoLibrary;
-(id)initWithAssetContainers:(id)arg1 ;
-(void)setContainers:(NSOrderedSet *)arg1 ;
-(id)initWithAssetContainer:(id)arg1 ;
-(BOOL)isEmpty;
@end

