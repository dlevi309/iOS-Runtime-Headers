/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)dtdWithBundleResource:(id)arg1 ofType:(id)arg2 ;
+(id)enexDTD;
+(id)enml2dtd;
+(id)lat1DTD;
+(id)symbolDTD;
+(id)specialDTD;
-(void)dealloc;
-(id)initWithContentsOfFile:(id)arg1 ;
-(xmlEntity*)xmlEntityNamed:(id)arg1 ;
-(xmlElement*)xmlElementNamed:(id)arg1 ;
-(BOOL)isElementLegal:(id)arg1 ;
-(id)sanitizedAttributes:(id)arg1 forElement:(id)arg2 ;
-(BOOL)isAttributeLegal:(id)arg1 inElement:(id)arg2 ;
-(NSString *)docTypeDeclaration;
-(void)setDocTypeDeclaration:(NSString *)arg1 ;
@end

