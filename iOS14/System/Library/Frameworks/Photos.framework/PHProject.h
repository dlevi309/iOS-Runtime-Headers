/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetCollection.h>

@class NSData, NSDate, NSString;

@interface PHProject : PHAssetCollection {

	NSData* _projectExtensionData;
	NSDate* _creationDate;
	NSString* _projectExtensionIdentifier;
	NSString* _projectDocumentType;
	NSString* _projectRenderUuid;

}

@property (nonatomic,readonly) NSData * projectData; 
@property (nonatomic,readonly) NSString * projectExtensionIdentifier;              //@synthesize projectExtensionIdentifier=_projectExtensionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * projectDocumentType;                     //@synthesize projectDocumentType=_projectDocumentType - In the implementation block
@property (nonatomic,readonly) NSString * projectRenderUuid;                       //@synthesize projectRenderUuid=_projectRenderUuid - In the implementation block
@property (nonatomic,readonly) NSData * projectExtensionData;                      //@synthesize projectExtensionData=_projectExtensionData - In the implementation block
@property (nonatomic,readonly) BOOL hasProjectPreview; 
+(id)fetchProjectsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)entityKeyMap;
+(BOOL)managedObjectSupportsPendingState;
+(BOOL)managedObjectSupportsRejectedState;
+(id)identifierCode;
+(id)fetchProjectsWithOptions:(id)arg1 ;
+(id)fetchType;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)localIdentifierWithUUID:(id)arg1 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)managedEntityName;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(NSData *)projectData;
-(BOOL)canContainCustomKeyAssets;
-(BOOL)hasProjectPreview;
-(NSData *)projectExtensionData;
-(NSString *)projectExtensionIdentifier;
-(NSString *)projectDocumentType;
-(NSString *)projectRenderUuid;
-(id)creationDate;
@end

