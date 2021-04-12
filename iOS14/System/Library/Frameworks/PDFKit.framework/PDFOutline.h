/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFOutlinePrivate, PDFDocument, NSString, PDFDestination, PDFAction;

@interface PDFOutline : NSObject {

	PDFOutlinePrivate* _private;

}

@property (nonatomic,__weak,readonly) PDFDocument * document; 
@property (nonatomic,readonly) PDFOutline * parent; 
@property (nonatomic,readonly) unsigned long long numberOfChildren; 
@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,copy) NSString * label; 
@property (assign,nonatomic) BOOL isOpen; 
@property (nonatomic,retain) PDFDestination * destination; 
@property (nonatomic,retain) PDFAction * action; 
-(id)_next;
-(unsigned long long)index;
-(void)setDestination:(PDFDestination *)arg1 ;
-(PDFOutline *)parent;
-(id)init;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(BOOL)isOpen;
-(void)setDocument:(PDFDocument *)arg1 ;
-(PDFAction *)action;
-(void)setAction:(PDFAction *)arg1 ;
-(void)commonInit;
-(unsigned long long)numberOfChildren;
-(id)_previous;
-(void)removeFromParent;
-(void)setLabel:(NSString *)arg1 ;
-(PDFDocument *)document;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSString *)label;
-(PDFDestination *)destination;
-(void)_setParent:(id)arg1 ;
-(void)dealloc;
-(void)setIsOpen:(BOOL)arg1 ;
-(CFDictionaryRef)createDictionaryRef;
-(void)invalidateDictionaryRef;
-(id)initWithDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 parent:(id)arg3 ;
-(void)_lazilyLoadChildren;
-(id)_childArray;
-(void)_removeChildAtIndex:(unsigned long long)arg1 ;
-(BOOL)_childDictionaryReferencesParent:(CGPDFDictionaryRef)arg1 ;
-(id)_firstChild;
-(id)_lastChild;
-(int)_openDescendantCount;
-(BOOL)_addDestinationToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)_addActionToDictionaryRef:(CFDictionaryRef)arg1 ;
-(CGPDFDictionaryRef)_srcDictionaryRef;
@end

