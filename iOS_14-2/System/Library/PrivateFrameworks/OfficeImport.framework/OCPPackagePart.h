/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSURL, OCPPackageRelationshipCollection, NSMutableDictionary, OCPPackage;

@interface OCPPackagePart : NSObject {

	NSURL* mLocation;
	OCPPackageRelationshipCollection* mRelationships;
	xmlDoc* mDocument;
	NSMutableDictionary* mAlternateContentMap;
	OCPPackage* mPackage;

}

@property (__weak,readonly) OCPPackage * package; 
-(id)location;
-(id)contentType;
-(id)data;
-(OCPPackage *)package;
-(void)dealloc;
-(xmlDoc*)xmlDocument;
-(xmlTextReaderRef)xmlReader;
-(void)copyToFile:(id)arg1 ;
-(id)relationshipsByType:(id)arg1 ;
-(id)relationshipForIdentifier:(id)arg1 ;
-(xmlNode*)fallbackNodeForChoiceNode:(xmlNode*)arg1 ;
-(void)setFallbackNode:(xmlNode*)arg1 forChoiceNode:(xmlNode*)arg2 ;
-(id)initWithLocation:(id)arg1 relationshipsXml:(xmlDoc*)arg2 package:(id)arg3 ;
-(id)firstPartWithRelationshipOfType:(id)arg1 ;
@end

