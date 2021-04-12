/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKSearchReference.h>

@protocol TSDCanvasSelection, TSKAnnotation;
@class NSArray, TSDDrawableInfo, TSKDocumentRoot, NSString;

@interface TSDCanvasSearchReference : NSObject <TSKSearchReference> {

	id<TSDCanvasSelection> mCanvasSelection;
	TSDDrawableInfo* mDrawableInfo;
	TSKDocumentRoot* mDocumentRoot;
	BOOL mAutohideHighlight;
	BOOL mPulseHighlight;
	NSArray* mFindHighlights;
	id<TSKAnnotation> mAnnotation;
	CGPoint mSearchReferencePoint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint searchReferencePoint; 
@property (nonatomic,retain) NSArray * findHighlights; 
@property (assign,nonatomic) BOOL pulseHighlight; 
@property (assign,nonatomic) BOOL autohideHighlight; 
@property (nonatomic,retain) id<TSKAnnotation> annotation; 
+(id)searchReferenceWithDrawableInfo:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)model;
-(id)selection;
-(id<TSKAnnotation>)annotation;
-(void)setAnnotation:(id<TSKAnnotation>)arg1 ;
-(CGPoint)searchReferencePoint;
-(void)setSearchReferencePoint:(CGPoint)arg1 ;
-(id)initWithDrawableInfo:(id)arg1 ;
-(id)drawableInfo;
-(id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id*)arg3 ;
-(id)searchReferenceStart;
-(id)searchReferenceEnd;
-(BOOL)isReplaceable;
-(NSArray *)findHighlights;
-(void)setFindHighlights:(NSArray *)arg1 ;
-(BOOL)pulseHighlight;
-(void)setPulseHighlight:(BOOL)arg1 ;
-(BOOL)autohideHighlight;
-(void)setAutohideHighlight:(BOOL)arg1 ;
@end

