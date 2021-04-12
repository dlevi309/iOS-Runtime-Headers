/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OCPPackageRelationshipCollection, OCPPackageProperties, NSMutableDictionary;

@interface OCPPackage : NSObject {

	OCPPackageRelationshipCollection* mRelationships;
	OCPPackageProperties* mProperties;
	NSMutableDictionary* mDefaultContentTypes;
	NSMutableDictionary* mContentTypeOverrides;

}
-(id)init;
-(id)properties;
-(id)partForLocation:(id)arg1 ;
-(id)contentTypeForPartLocation:(id)arg1 ;
-(void)resetPartForLocation:(id)arg1 ;
-(id)mainDocumentPart;
-(id)relationshipsByType:(id)arg1 ;
-(id)partByRelationshipType:(id)arg1 ;
-(id)relationshipForIdentifier:(id)arg1 ;
-(void)readContentTypesXml:(xmlDoc*)arg1 ;
-(id)initWithRelationshipsXml:(xmlDoc*)arg1 corePropertiesXml:(xmlDoc*)arg2 appPropertiesXml:(xmlDoc*)arg3 contentTypesXml:(xmlDoc*)arg4 ;
-(void)readDefaultContentTypeFromElement:(xmlNode*)arg1 ;
-(void)readContentTypeOverrideFromElement:(xmlNode*)arg1 ;
@end

