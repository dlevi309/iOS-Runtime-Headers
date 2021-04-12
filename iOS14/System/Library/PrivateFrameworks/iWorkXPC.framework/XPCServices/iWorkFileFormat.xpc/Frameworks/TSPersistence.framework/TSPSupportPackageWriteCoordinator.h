/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPPackageWriteCoordinator.h>

@class TSPPackageWriteCoordinator;

@interface TSPSupportPackageWriteCoordinator : TSPPackageWriteCoordinator {

	TSPPackageWriteCoordinator* _packageWriteCoordinator;

}
-(id)objectForIdentifier:(long long)arg1 ;
-(id)initWithContext:(id)arg1 archiverClass:(Class)arg2 archiverFlags:(char)arg3 documentRevision:(id)arg4 saveToken:(unsigned long long)arg5 packageIdentifier:(unsigned char)arg6 fileFormatVersion:(unsigned long long)arg7 preferredPackageType:(long long)arg8 metadataObject:(id)arg9 dataAttributesSnapshot:(id)arg10 ;
-(id)initWithContext:(id)arg1 archiverClass:(Class)arg2 archiverFlags:(char)arg3 documentRevision:(id)arg4 saveToken:(unsigned long long)arg5 fileFormatVersion:(unsigned long long)arg6 metadataObject:(id)arg7 dataAttributesSnapshot:(id)arg8 packageWriteCoordinator:(id)arg9 ;
-(void)didReferenceData:(id)arg1 ;
-(BOOL)shouldEnqueueComponent:(id)arg1 ;
-(BOOL)isObjectInExternalPackage:(id)arg1 claimingComponent:(id*)arg2 componentReadVersion:(unsigned long long*)arg3 ;
-(BOOL)isComponentExternalWithIdentifier:(long long)arg1 wasCopied:(BOOL*)arg2 componentReadVersion:(unsigned long long*)arg3 ;
-(BOOL)isObjectWrittenInExternalPackageWithIdentifier:(long long)arg1 ;
-(BOOL)componentWriter:(id)arg1 externalPackageDidWriteObject:(id)arg2 claimingComponent:(id*)arg3 componentReadVersion:(unsigned long long*)arg4 ;
-(long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2 objectUUIDOrNil:(id)arg3 outComponentIsVersioned:(BOOL*)arg4 ;
-(BOOL)wasComponentCopied:(long long)arg1 ;
@end

