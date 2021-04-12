/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(id)contentString;
-(void)setRootElement:(OIXMLElement *)arg1 ;
-(OIXMLElement *)rootElement;
-(id)initWithRootElement:(id)arg1 ;
-(id)openingTagString;
-(id)XMLString;
-(id)closingTagString;
-(void)setCharacterEncoding:(NSString *)arg1 ;
-(NSString *)characterEncoding;
-(id)createMutableXMLString;
@end

