/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSPObject.h>
#import <TSReading/TSKDocumentObject.h>
#import <TSReading/TSPCopying.h>

@class TSWPStorage, TSWPChangeSession, NSDate, TSUColor;

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying> {

	TSWPStorage* _parentStorage;
	int _kind;
	TSWPChangeSession* _session;
	NSDate* _date;
	BOOL _hidden;

}

@property (assign,nonatomic) TSWPStorage * parentStorage;                     //@synthesize parentStorage=_parentStorage - In the implementation block
@property (nonatomic,retain) TSWPChangeSession * session; 
@property (nonatomic,retain) NSDate * date; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (nonatomic,readonly) BOOL isInsertion; 
@property (nonatomic,readonly) BOOL isDeletion; 
@property (nonatomic,readonly) BOOL showsMarkup; 
@property (nonatomic,readonly) BOOL showsHiddenDeletionMarkup; 
@property (nonatomic,readonly) TSUColor * textMarkupColor; 
@property (nonatomic,readonly) TSUColor * changeAdornmentsColor; 
-(void)dealloc;
-(NSDate *)date;
-(BOOL)isHidden;
-(TSWPChangeSession *)session;
-(void)setSession:(TSWPChangeSession *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(TSUColor *)textMarkupColor;
-(TSUColor *)changeAdornmentsColor;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(TSWPStorage *)parentStorage;
-(void)setParentStorage:(TSWPStorage *)arg1 ;
-(BOOL)canMergeWithKind:(int)arg1 session:(id)arg2 ;
-(id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3 ;
-(void)trackedTextDidChange;
-(BOOL)showsMarkup;
-(void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 ;
-(BOOL)isInsertion;
-(BOOL)isDeletion;
-(BOOL)showsHiddenDeletionMarkup;
-(BOOL)isFromChangeSession:(id)arg1 ;
@end

