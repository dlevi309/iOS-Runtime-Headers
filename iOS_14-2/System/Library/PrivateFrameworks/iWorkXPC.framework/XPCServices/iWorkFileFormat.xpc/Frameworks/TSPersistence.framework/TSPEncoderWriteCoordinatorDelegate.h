/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPEncoderWriteCoordinatorDelegate <NSObject>
@required
-(unsigned long long)objectTargetType;
-(long long)componentWriterMode;
-(id)createMetadataForRootObject:(id)arg1 readVersion:(unsigned long long)arg2 dataArchiver:(id)arg3 archivedObjects:(id)arg4 componentObjectUUIDMap:(id)arg5 externalReferences:(id)arg6 weakExternalReferences:(id)arg7 lazyReferences:(id)arg8 dataReferences:(id)arg9 error:(id*)arg10;
-(BOOL)skipMetadataObjectSerialization;

@end

