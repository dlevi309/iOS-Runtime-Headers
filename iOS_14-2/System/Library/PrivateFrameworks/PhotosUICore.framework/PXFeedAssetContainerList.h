/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PLAssetContainerList.h>

@class NSString, NSOrderedSet;

@interface PXFeedAssetContainerList : NSObject <PLAssetContainerList> {

	NSString* _transientIdentifier;
	NSOrderedSet* _sectionInfos;

}

@property (nonatomic,copy) NSOrderedSet * sectionInfos;                         //@synthesize sectionInfos=_sectionInfos - In the implementation block
@property (nonatomic,readonly) NSString * transientIdentifier;                  //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)containers;
-(NSOrderedSet *)sectionInfos;
-(unsigned long long)containersCount;
-(id)managedObjectContext;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(id)photoLibrary;
-(void)setSectionInfos:(NSOrderedSet *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(NSString *)transientIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

