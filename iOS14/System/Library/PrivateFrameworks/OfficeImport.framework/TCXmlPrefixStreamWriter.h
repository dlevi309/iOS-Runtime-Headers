/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/TCXmlStreamWriter.h>

@class NSMutableArray;

@interface TCXmlPrefixStreamWriter : TCXmlStreamWriter {

	NSMutableArray* mStateStack;

}
-(void)popState;
-(BOOL)addElement:(id)arg1 ;
-(id)currentState;
-(id)pushState;
-(void)dealloc;
-(BOOL)startElement:(id)arg1 ;
-(id)pushStateWithElementPrefix:(id)arg1 attributePrefix:(id)arg2 ;
-(id)currentElementPrefix;
-(id)currentAttributePrefix;
-(BOOL)writeAttribute:(id)arg1 content:(id)arg2 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 content:(id)arg3 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 boolContent:(BOOL)arg3 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 intContent:(long long)arg3 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 enumContent:(int)arg3 map:(id)arg4 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 doubleContent:(double)arg3 ;
-(void)pushElementPrefix:(id)arg1 attributePrefix:(id)arg2 ;
-(id)pushStateWithSharedPrefix:(id)arg1 ;
-(BOOL)writeAttribute:(id)arg1 boolContent:(BOOL)arg2 ;
-(BOOL)writeAttribute:(id)arg1 intContent:(long long)arg2 ;
-(BOOL)writeAttribute:(id)arg1 unsignedLongContent:(unsigned long long)arg2 ;
-(BOOL)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(BOOL)writeAttribute:(id)arg1 doubleContent:(double)arg2 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg1 content:(id)arg2 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg1 boolContent:(BOOL)arg2 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg1 intContent:(long long)arg2 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg1 doubleContent:(double)arg2 ;
-(id)initWithTextWriterProvider:(id)arg1 ;
-(BOOL)startOAElement:(id)arg1 ;
-(BOOL)writeOAAttribute:(id)arg1 content:(id)arg2 ;
-(void)pushOAState;
-(BOOL)writeOAAttribute:(id)arg1 boolContent:(BOOL)arg2 ;
-(BOOL)writeOAAttribute:(id)arg1 intContent:(long long)arg2 ;
-(BOOL)writeOAAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(BOOL)writeOAAttribute:(id)arg1 doubleContent:(double)arg2 ;
-(BOOL)writeIndexAttribute:(id)arg1 intContent:(unsigned long long)arg2 ;
-(void)writeTextString:(id)arg1 forElement:(id)arg2 ;
@end

