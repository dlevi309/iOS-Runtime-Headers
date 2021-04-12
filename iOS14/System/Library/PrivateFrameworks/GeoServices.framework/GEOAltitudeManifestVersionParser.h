/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSURL, GEOFlyoverRegionVersions, NSError, NSString;

@interface GEOAltitudeManifestVersionParser : NSObject <NSXMLParserDelegate> {

	GEOOnce_s _parsed;
	NSURL* _fileURL;
	GEOFlyoverRegionVersions* _versions;
	NSError* _parseError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFileURL:(id)arg1 ;
-(id)parse:(id*)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
@end

