/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSPObject.h>
#import <TSReading/TSKDocumentObject.h>
#import <TSReading/TSWPSection.h>

@class TPDocumentRoot, TSWPStorage;

@interface TSWPSectionPlaceholder : TSPObject <TSKDocumentObject, TSWPSection> {

	TPDocumentRoot* _documentRoot;
	TSWPStorage* _parentStorage;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithContext:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)parentStorage;
-(void)setParentStorage:(id)arg1 ;
-(void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1 ;
@end

