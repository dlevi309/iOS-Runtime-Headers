/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPDecoderReadCoordinatorDelegate.h>

@class TSPObjectContext, NSURL, NSDictionary, TSPComponent, NSString;

@interface TSPObjectSerializationReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate> {

	TSPObjectContext* _context;
	NSURL* _resourcesFolderURL;
	NSDictionary* _identiferToResourceNameDictionary;
	unsigned long long _readVersion;
	NSDictionary* _identifierToObjectUUIDDictionary;
	NSDictionary* _dataInfos;
	TSPComponent* _rootObjectComponent;
	BOOL _deserializeAsPasteboard;
	BOOL _resetObjectUUIDs;
	BOOL _shouldDecodeMissingDataAsRemote;
	BOOL _isCrossDocumentPaste;
	BOOL _isCrossAppPaste;

}

@property (assign,nonatomic) BOOL isCrossDocumentPaste;                           //@synthesize isCrossDocumentPaste=_isCrossDocumentPaste - In the implementation block
@property (assign,nonatomic) BOOL isCrossAppPaste;                                //@synthesize isCrossAppPaste=_isCrossAppPaste - In the implementation block
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) unsigned long long readVersion; 
@property (nonatomic,readonly) BOOL hasDocumentVersionUUID; 
@property (nonatomic,readonly) long long sourceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)sourceType;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)fileFormatVersion;
-(BOOL)hasDocumentVersionUUID;
-(BOOL)isCrossAppPaste;
-(unsigned long long)readVersion;
-(long long)objectIdentifierForUUID:(id)arg1 ;
-(id)cachedMetadataObject;
-(id)metadataComponent;
-(BOOL)processMetadataObject:(id)arg1 error:(id*)arg2 ;
-(id)rootObjectComponent;
-(BOOL)canResolveExternalReferences;
-(BOOL)shouldResolveExternalReferencesUsingObjectUUID;
-(id)objectUUIDForExternalReferenceToIdentifier:(long long)arg1 ;
-(id)cachedDataForIdentifier:(long long)arg1 ;
-(id)dataInfoForIdentifier:(long long)arg1 ;
-(BOOL)shouldDecodeMissingDataAsRemote;
-(BOOL)isCrossDocumentPaste;
-(id)decodeObjectWithData:(id)arg1 packageURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)setIsCrossDocumentPaste:(BOOL)arg1 ;
-(void)setIsCrossAppPaste:(BOOL)arg1 ;
-(id)resourceURLForIdentifier:(long long)arg1 ;
@end
