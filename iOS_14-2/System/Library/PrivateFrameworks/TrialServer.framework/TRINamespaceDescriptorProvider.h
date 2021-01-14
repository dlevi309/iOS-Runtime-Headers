/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRINamespaceDescriptorProviding.h>

@class TRINamespaceDatabase, NSString;

@interface TRINamespaceDescriptorProvider : NSObject <TRINamespaceDescriptorProviding> {

	TRINamespaceDatabase* _namespaceDatabase;
	NSString* _descriptorDirectory;

}
+(id)providerWithNamespaceDatabase:(id)arg1 defaultDescriptorDirectoryPath:(id)arg2 ;
+(id)_descriptorFromDynamicNamespaceRecord:(id)arg1 ;
-(id)descriptorWithNamespaceName:(id)arg1 ;
-(id)initWithNamespaceDatabase:(id)arg1 defaultDescriptorDirectoryPath:(id)arg2 ;
-(id)_dynamicDescriptorsForContainer:(int)arg1 teamId:(id)arg2 ;
@end

