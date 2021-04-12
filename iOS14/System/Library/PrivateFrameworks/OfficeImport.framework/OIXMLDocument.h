/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OIXMLNode.h>

@class OIXMLElement, NSString;

@interface OIXMLDocument : OIXMLNode {

	OIXMLElement* _rootElement;
	NSString* _version;
	NSString* _encoding;

}

@property (retain) OIXMLElement * rootElement;              //@synthesize rootElement=_rootElement - In the implementation block
@property (copy) NSString * version;                        //@synthesize version=_version - In the implementation block
@property (copy) NSString * characterEncoding;              //@synthesize encoding=_encoding - In the implementation block
-(void)setRootElement:(OIXMLElement *)arg1 ;
-(id)contentString;
-(id)description;
-(void)setVersion:(NSString *)arg1 ;
-(OIXMLElement *)rootElement;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)openingTagString;
-(id)XMLString;
-(id)closingTagString;
-(id)initWithRootElement:(id)arg1 ;
-(void)setCharacterEncoding:(NSString *)arg1 ;
-(NSString *)characterEncoding;
-(id)createMutableXMLString;
@end

