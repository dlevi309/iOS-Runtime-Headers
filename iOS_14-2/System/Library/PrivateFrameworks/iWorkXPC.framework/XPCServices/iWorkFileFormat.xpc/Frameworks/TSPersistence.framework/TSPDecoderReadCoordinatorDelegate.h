/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPDecoderReadCoordinatorDelegate <NSObject>
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) unsigned long long readVersion; 
@property (nonatomic,readonly) BOOL hasDocumentVersionUUID; 
@property (nonatomic,readonly) long long sourceType; 
@property (nonatomic,readonly) BOOL isCrossDocumentPaste; 
@property (nonatomic,readonly) BOOL isCrossAppPaste; 
@required
-(long long)sourceType;
-(unsigned long long)fileFormatVersion;
-(BOOL)hasDocumentVersionUUID;
-(BOOL)isCrossAppPaste;
-(unsigned long long)readVersion;
-(long long)objectIdentifierForUUID:(id)arg1;
-(id)cachedMetadataObject;
-(id)metadataComponent;
-(BOOL)processMetadataObject:(id)arg1 error:(id*)arg2;
-(id)rootObjectComponent;
-(BOOL)canResolveExternalReferences;
-(BOOL)shouldResolveExternalReferencesUsingObjectUUID;
-(id)objectUUIDForExternalReferenceToIdentifier:(long long)arg1;
-(id)cachedDataForIdentifier:(long long)arg1;
-(id)dataInfoForIdentifier:(long long)arg1;
-(BOOL)shouldDecodeMissingDataAsRemote;
-(BOOL)isCrossDocumentPaste;

@end

