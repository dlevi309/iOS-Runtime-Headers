/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCDDocument.h>

@class NSMutableArray;

@interface PDPresentation : OCDDocument {

	NSMutableArray* mSlideMasters;
	NSMutableArray* mNotesMasters;
	NSMutableArray* mSlides;
	NSMutableArray* mBulletBlips;
	CGSize mSlideSize;
	CGSize mNotesSize;
	BOOL mIsAutoPlay;
	BOOL mIsCommentsVisible;
	BOOL mIsLooping;
	BOOL mIsKiosk;
	NSMutableArray* mCommentAuthors;

}
-(id)init;
-(BOOL)isAutoPlay;
-(BOOL)isLooping;
-(id)description;
-(BOOL)isKiosk;
-(CGSize)slideSize;
-(void)removeUnnecessaryOverrides;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(id)bulletBlips;
-(unsigned)bulletBlipCount;
-(void)setSlideSize:(CGSize)arg1 ;
-(void)setNotesSize:(CGSize)arg1 ;
-(void)setIsCommentsVisible:(BOOL)arg1 ;
-(void)setIsLooping:(BOOL)arg1 ;
-(void)setIsKiosk:(BOOL)arg1 ;
-(void)addSlideMaster:(id)arg1 ;
-(unsigned long long)commentAuthorCount;
-(void)addCommentAuthor:(id)arg1 ;
-(void)cacheGraphicStylesForSlideBase:(id)arg1 ;
-(void)addSlide:(id)arg1 ;
-(void)addNotesMaster:(id)arg1 ;
-(void)setIsAutoPlay:(BOOL)arg1 ;
-(id)notesMasterAtIndex:(unsigned long long)arg1 ;
-(id)commentAuthorAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)slideCount;
-(id)slideAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)slideMasterCount;
-(id)slideMasterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)notesMasterCount;
-(unsigned long long)indexOfSlide:(id)arg1 ;
-(id)bulletBlipAtIndex:(int)arg1 ;
-(unsigned)addBulletBlip:(id)arg1 ;
-(CGSize)notesSize;
-(BOOL)isCommentsVisible;
-(void)flushUnusedMastersAndLayouts;
-(void)ensureDefaultLayoutsForMasters;
-(void)cacheGraphicStyleForDrawable:(id)arg1 colorContext:(id)arg2 ;
@end

