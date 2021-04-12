/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSWPTextualAttachment.h>

@class TSWPStorage, NSString;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment {

	TSWPStorage* _containedStorage;
	NSString* _customMarkString;

}

@property (nonatomic,retain) TSWPStorage * containedStorage;              //@synthesize containedStorage=_containedStorage - In the implementation block
@property (nonatomic,retain) NSString * customMarkString;                 //@synthesize customMarkString=_customMarkString - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(int)elementKind;
-(unsigned long long)findCharIndex;
-(BOOL)isSearchable;
-(id)copyWithContext:(id)arg1 ;
-(void)checkDebug;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(TSWPStorage *)containedStorage;
-(void)setParentStorage:(id)arg1 ;
-(id)stringEquivalent;
-(void)setContainedStorage:(TSWPStorage *)arg1 ;
-(id)initWithContext:(id)arg1 wpStorage:(id)arg2 ;
-(void)applyMark;
-(NSString *)customMarkString;
-(void)setCustomMarkString:(NSString *)arg1 ;
-(void)setContainedStorageParentInfoToStorage:(id)arg1 ;
@end

