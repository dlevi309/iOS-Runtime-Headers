/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


#import <ContentKit/ContentKit-Structs.h>
@class NSArray;

@interface WFPDFDocument : NSObject {

	BOOL _encrypted;
	BOOL _locked;
	BOOL _allowsPrinting;
	BOOL _allowsCopying;
	CGPDFDocumentRef _documentRef;
	NSArray* _pages;

}

@property (nonatomic,retain) NSArray * pages;                                     //@synthesize pages=_pages - In the implementation block
@property (nonatomic,readonly) CGPDFDocumentRef documentRef;                      //@synthesize documentRef=_documentRef - In the implementation block
@property (nonatomic,readonly) int majorVersion; 
@property (nonatomic,readonly) int minorVersion; 
@property (assign,getter=isEncrypted,nonatomic) BOOL encrypted;                   //@synthesize encrypted=_encrypted - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked;                         //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) BOOL allowsPrinting;                                 //@synthesize allowsPrinting=_allowsPrinting - In the implementation block
@property (assign,nonatomic) BOOL allowsCopying;                                  //@synthesize allowsCopying=_allowsCopying - In the implementation block
@property (nonatomic,readonly) unsigned long long expectedPageCount; 
@property (nonatomic,readonly) Class pageClass; 
-(BOOL)isLocked;
-(NSArray *)pages;
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)majorVersion;
-(void)setLocked:(BOOL)arg1 ;
-(BOOL)isEncrypted;
-(int)minorVersion;
-(void)setPages:(NSArray *)arg1 ;
-(void)setEncrypted:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithDocumentRef:(CGPDFDocumentRef)arg1 ;
-(CGPDFDocumentRef)documentRef;
-(BOOL)unlockWithPassword:(id)arg1 ;
-(BOOL)allowsPrinting;
-(BOOL)allowsCopying;
-(unsigned long long)expectedPageCount;
-(Class)pageClass;
-(void)setAllowsPrinting:(BOOL)arg1 ;
-(void)setAllowsCopying:(BOOL)arg1 ;
@end

