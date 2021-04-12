/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

@class NSUUID;


@protocol TSPReaderDelegate <NSObject>
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) unsigned long long readVersion; 
@property (nonatomic,readonly) unsigned char packageIdentifier; 
@property (nonatomic,readonly) NSUUID * baseObjectUUID; 
@property (nonatomic,readonly) BOOL isReadingFromDocument; 
@property (nonatomic,readonly) BOOL hasDocumentVersionUUID; 
@property (nonatomic,readonly) long long sourceType; 
@property (nonatomic,readonly) BOOL canRetainObjectReferencedByWeakLazyReference; 
@property (nonatomic,readonly) BOOL isCrossDocumentPaste; 
@property (nonatomic,readonly) BOOL isCrossAppPaste; 
@optional
-(BOOL)isCrossAppPaste;
-(BOOL)isCrossDocumentPaste;
-(void)reader:(id)arg1 didUnarchiveObject:(id)arg2;
-(void)reader:(id)arg1 didResetObjectIdentifierForObject:(id)arg2 originalObjectIdentifier:(long long)arg3;
-(void)reader:(id)arg1 didResetObjectUUID:(id)arg2 forObjectIdentifier:(long long)arg3 originalObjectUUID:(id)arg4;

@required
-(long long)sourceType;
-(unsigned char)packageIdentifier;
-(unsigned long long)fileFormatVersion;
-(BOOL)hasDocumentVersionUUID;
-(BOOL)canRetainObjectReferencedByWeakLazyReference;
-(unsigned long long)readVersion;
-(void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(/*^block*/id)arg7;
-(void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(/*^block*/id)arg6;
-(void)reader:(id)arg1 didReadLazyReference:(id)arg2;
-(BOOL)isReadingFromDocument;
-(NSUUID *)baseObjectUUID;
-(long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
-(id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
-(id)contextForReader:(id)arg1;
-(id)lazyReferenceDelegateForReader:(id)arg1;
-(id)objectDelegateForReader:(id)arg1;
-(id)cancellationStateForReader:(id)arg1;

@end

