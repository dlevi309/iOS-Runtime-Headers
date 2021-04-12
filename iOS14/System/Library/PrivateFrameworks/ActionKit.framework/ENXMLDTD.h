/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSString;

@interface ENXMLDTD : NSObject {

	xmlDtd* _dtd;
	NSString* _docTypeDeclaration;

}

@property (nonatomic,retain) NSString * docTypeDeclaration;              //@synthesize docTypeDeclaration=_docTypeDeclaration - In the implementation block
+(void)initialize;
+(id)enexDTD;
+(id)lat1DTD;
+(id)dtdWithBundleResource:(id)arg1 ofType:(id)arg2 ;
+(id)enml2dtd;
+(id)symbolDTD;
+(id)specialDTD;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)dealloc;
-(xmlEntity*)xmlEntityNamed:(id)arg1 ;
-(xmlElement*)xmlElementNamed:(id)arg1 ;
-(BOOL)isElementLegal:(id)arg1 ;
-(id)sanitizedAttributes:(id)arg1 forElement:(id)arg2 ;
-(BOOL)isAttributeLegal:(id)arg1 inElement:(id)arg2 ;
-(NSString *)docTypeDeclaration;
-(void)setDocTypeDeclaration:(NSString *)arg1 ;
@end

