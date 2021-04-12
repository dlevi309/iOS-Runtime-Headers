/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CXNamespace : NSObject {

	const char* mUri;
	xmlDoc* mDocument;
	xmlNs* mDocumentNamespace;
	CXNamespace* mFallbackNamespace;

}

@property (nonatomic,retain) CXNamespace * fallbackNamespace; 
+(void)registerNamespace:(id)arg1 ;
+(BOOL)isNamespaceSupported:(const char*)arg1 ;
+(BOOL)isPrefixSupportedFromNodeContext:(xmlNode*)arg1 prefix:(const char*)arg2 ;
+(BOOL)isPrefixSupportedFromStream:(xmlTextReaderRef)arg1 prefix:(const char*)arg2 ;
+(void)clearRegisteredNamespaces;
-(const char*)uri;
-(id)init;
-(BOOL)containsNode:(xmlNode*)arg1 ;
-(BOOL)containsAttribute:(xmlAttr*)arg1 ;
-(CXNamespace *)fallbackNamespace;
-(id)initUnsupportedNsWithUri:(const char*)arg1 ;
-(id)initWithUri:(const char*)arg1 ;
-(const char*)fallbackUri;
-(id)initWithUri:(const char*)arg1 fallbackNamespace:(id)arg2 ;
-(void)setFallbackNamespace:(CXNamespace *)arg1 ;
@end

