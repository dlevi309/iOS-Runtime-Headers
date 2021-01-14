/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isResolved;
-(WDAnnotation *)parent;
-(id)reference;
-(id)owner;
-(void)setDate:(id)arg1 ;
-(void)setParent:(WDAnnotation *)arg1 ;
-(id)description;
-(id)data;
-(id)text;
-(void)setOwner:(id)arg1 ;
-(int)annotationType;
-(id)date;
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

