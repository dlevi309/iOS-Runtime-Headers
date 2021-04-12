/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterRun, WDAnnotationData;

@interface WDAnnotation : WDRun {

	int mType;
	WDCharacterRun* mReference;
	BOOL mReferencePopertiesFixed;
	WDAnnotationData* mData;
	WDAnnotation* mOtherEndOfRangedAnnotation;
	BOOL isResolved;
	WDAnnotation* parent;

}

@property (assign) BOOL isResolved; 
@property (assign) WDAnnotation * parent; 
-(id)description;
-(WDAnnotation *)parent;
-(void)setParent:(WDAnnotation *)arg1 ;
-(id)date;
-(id)data;
-(void)setOwner:(id)arg1 ;
-(BOOL)isResolved;
-(id)owner;
-(id)text;
-(void)setDate:(id)arg1 ;
-(id)reference;
-(int)annotationType;
-(int)runType;
-(BOOL)referencePropertiesFixed;
-(void)setReferencePropertiesFixed;
-(void)setOtherEndOfRangedAnnotation:(id)arg1 ;
-(void)useDataFromOtherEnd;
-(id)otherEndOfRangedAnnotation;
-(id)initWithParagraph:(id)arg1 type:(int)arg2 ;
-(id)paragraphIds;
-(unsigned long long)lastParagraphId;
-(void)setIsResolved:(BOOL)arg1 ;
@end

