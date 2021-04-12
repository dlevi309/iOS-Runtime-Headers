/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)data;
-(id)contentType;
-(id)location;
-(OCPPackage *)package;
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

