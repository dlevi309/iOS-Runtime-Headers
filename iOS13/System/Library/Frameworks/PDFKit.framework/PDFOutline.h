/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(PDFOutline *)parent;
-(unsigned long long)index;
-(id)_next;
-(PDFAction *)action;
-(BOOL)isOpen;
-(PDFDestination *)destination;
-(void)setLabel:(NSString *)arg1 ;
-(void)setDestination:(PDFDestination *)arg1 ;
-(NSString *)label;
-(void)commonInit;
-(void)setAction:(PDFAction *)arg1 ;
-(void)_setParent:(id)arg1 ;
-(void)setDocument:(PDFDocument *)arg1 ;
-(PDFDocument *)document;
-(CFDictionaryRef)createDictionaryRef;
-(unsigned long long)numberOfChildren;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(void)invalidateDictionaryRef;
-(id)initWithDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 parent:(id)arg3 ;
-(void)_lazilyLoadChildren;
-(id)_childArray;
-(void)_removeChildAtIndex:(unsigned long long)arg1 ;
-(BOOL)_childDictionaryReferencesParent:(CGPDFDictionaryRef)arg1 ;
-(id)_firstChild;
-(id)_previous;
-(id)_lastChild;
-(int)_openDescendantCount;
-(BOOL)_addDestinationToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)_addActionToDictionaryRef:(CFDictionaryRef)arg1 ;
-(CGPDFDictionaryRef)_srcDictionaryRef;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeFromParent;
-(void)setIsOpen:(BOOL)arg1 ;
@end

