/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

@class TSPComponent;


@protocol TSPUnarchiverDelegate <NSObject>
@property (nonatomic,readonly) long long componentIdentifier; 
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) unsigned long long readVersion; 
@property (nonatomic,readonly) BOOL didFinishResolvingReferences; 
@property (nonatomic,readonly) BOOL hasDocumentVersionUUID; 
@property (nonatomic,readonly) long long sourceType; 
@property (nonatomic,readonly) BOOL canRetainObjectReferencedByWeakLazyReference; 
@property (nonatomic,readonly) BOOL isCrossDocumentPaste; 
@property (nonatomic,readonly) BOOL isCrossAppPaste; 
@property (nonatomic,readonly) TSPComponent * component; 
@optional
-(TSPComponent *)component;
-(BOOL)isCrossAppPaste;
-(BOOL)isCrossDocumentPaste;

@required
-(long long)sourceType;
-(long long)componentIdentifier;
-(id)dataForIdentifier:(long long)arg1;
-(unsigned long long)fileFormatVersion;
-(BOOL)hasDocumentVersionUUID;
-(BOOL)didFinishResolvingReferences;
-(BOOL)canRetainObjectReferencedByWeakLazyReference;
-(void)unarchiver:(id)arg1 didReadLazyReference:(id)arg2 isExternal:(BOOL*)arg3;
-(unsigned long long)readVersion;
-(long long)objectIdentifierForUUID:(id)arg1;
-(id)UUIDForObjectIdentifier:(long long)arg1;

@end

