/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCXReadState.h>

@protocol TCCancelDelegate;
@class NSMutableDictionary, OAXDrawingState, OAVReadState, OAXTableStyleCache, PDPresentation, CXNamespace;

@interface PXPresentationState : OCXReadState {

	NSMutableDictionary* mModelObjects;
	OAXDrawingState* mOfficeArtState;
	OAVReadState* mOAVState;
	OAXTableStyleCache* mTableStyleCache;
	NSMutableDictionary* mSlideURLToIndexMap;
	PDPresentation* mTgtPresentation;
	id<TCCancelDelegate> mCancel;
	CXNamespace* mPXPresentationMLNamespace;
	NSMutableDictionary* mCommentAuthorIdToIndexMap;

}

@property (nonatomic,retain) id<TCCancelDelegate> cancelDelegate; 
@property (nonatomic,readonly) NSMutableDictionary * commentAuthorIdToIndexMap; 
@property (nonatomic,retain) CXNamespace * PXPresentationMLNamespace; 
+(void)setPptChartGraphicPropertyDefaultBlock:(id)arg1 ;
-(id)init;
-(BOOL)isCancelled;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)tableStyleCache;
-(id)oavState;
-(id)officeArtState;
-(void)setCancelDelegate:(id<TCCancelDelegate>)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
-(CXNamespace *)PXPresentationMLNamespace;
-(id)tgtPresentation;
-(NSMutableDictionary *)commentAuthorIdToIndexMap;
-(void)setModelObject:(id)arg1 forLocation:(id)arg2 ;
-(void)setTgtPresentation:(id)arg1 ;
-(void)setSlideIndex:(long long)arg1 forSlideURL:(id)arg2 ;
-(void)setPXPresentationMLNamespace:(CXNamespace *)arg1 ;
-(long long)slideIndexForSlideURL:(id)arg1 ;
-(id)modelObjectForLocation:(id)arg1 ;
-(void)resetOfficeArtState;
@end

