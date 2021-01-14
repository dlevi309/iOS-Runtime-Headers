/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@class NSString, TSUPathSet, NSMutableSet, TSUTemporaryDirectory;

@interface TSPDistributableFileManager : NSObject {

	NSString* _directoryPath;
	BOOL _shouldCreate;
	TSUPathSet* _claimedPaths;
	NSMutableSet* _newIdentifiers;
	NSMutableSet* _modifiedIdentifiers;
	NSMutableSet* _deletedIdentifiers;
	TSUTemporaryDirectory* _modifiedFilesDirectory;
	BOOL _isCullingDisabled;

}
-(void)removeIdentifier:(id)arg1 ;
-(void)setDataFromInputStream:(id)arg1 length:(long long)arg2 forIdentifier:(id)arg3 ;
-(id)addDataFromInputStream:(id)arg1 length:(long long)arg2 filenameHint:(id)arg3 ;
-(id)initWithPath:(id)arg1 shouldCreate:(BOOL)arg2 ;
-(BOOL)commitWithError:(id*)arg1 ;
-(id)_filePathForIdentifier:(id)arg1 ;
-(id)_filePathForModifiedIdentifier:(id)arg1 ;
-(id)_claimedPaths;
-(void)_writeDataFromInputStream:(id)arg1 length:(long long)arg2 toPath:(id)arg3 ;
-(id)_modifiedFilesDirectoryPath;
-(id)addDataRepresentation:(id)arg1 filenameHint:(id)arg2 ;
-(void)setDataRepresentation:(id)arg1 forIdentifier:(id)arg2 ;
-(id)representationForIdentifier:(id)arg1 ;
-(void)disableFileCulling;
-(BOOL)prepareForSaveToPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)rehomeOntoPath:(id)arg1 ;
@end

