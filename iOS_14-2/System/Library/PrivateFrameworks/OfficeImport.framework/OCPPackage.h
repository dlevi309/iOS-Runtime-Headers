/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)properties;
-(id)init;
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

