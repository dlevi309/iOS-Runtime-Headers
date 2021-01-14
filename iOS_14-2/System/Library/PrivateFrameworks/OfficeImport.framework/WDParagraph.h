/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDBlock.h>

@class WDParagraphProperties, NSMutableArray;

@interface WDParagraph : WDBlock {

	WDParagraphProperties* mProperties;
	NSMutableArray* mRuns;
	unsigned long long identifier;

}

@property (assign) unsigned long long identifier; 
-(id)initWithText:(id)arg1 ;
-(id)properties;
-(id)addAnnotation:(int)arg1 ;
-(id)runs;
-(void)clearProperties;
-(id)description;
-(id)runAt:(unsigned long long)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
-(BOOL)isEmpty;
-(void)addRun:(id)arg1 ;
-(id)addBookmark;
-(BOOL)isTextFrame;
-(unsigned long long)runCount;
-(int)blockType;
-(BOOL)isContinuationOf:(id)arg1 ;
-(id)addBookmark:(id)arg1 type:(int)arg2 ;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(id)addCharacterRun;
-(id)addSpecialCharacter;
-(id)addSymbol;
-(id)addFootnote;
-(id)addEndnote;
-(id)addFieldMarker;
-(id)addAnnotation:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(id)addHyperlinkFieldMarker;
-(id)initWithText:(id)arg1 string:(id)arg2 ;
-(void)insertRun:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeRun:(id)arg1 ;
-(void)clearRuns;
-(id)addDateTime:(id)arg1 ;
-(id)addMath:(id)arg1 ;
-(float)maxReflectionDistance;
-(id)runIterator;
-(id)newRunIterator;
-(id)addFieldMarker:(int)arg1 ;
-(id)addHyperlinkFieldMarker:(int)arg1 ;
@end

