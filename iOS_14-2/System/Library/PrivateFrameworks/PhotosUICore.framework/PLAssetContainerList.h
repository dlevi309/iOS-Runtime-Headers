/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PLAssetContainerList <NSObject,PLDiagnosticsProvider>
@property (nonatomic,readonly) unsigned long long containersCount; 
@required
-(id)containers;
-(unsigned long long)containersCount;
-(id)managedObjectContext;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(id)photoLibrary;
-(BOOL)isEmpty;

@end

