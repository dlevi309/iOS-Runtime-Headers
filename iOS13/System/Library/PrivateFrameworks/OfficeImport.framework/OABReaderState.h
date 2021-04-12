/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OADColorPalette;
@class NSMutableDictionary, NSMutableArray, ESDContainer;

@interface OABReaderState : NSObject {

	Class mClient;
	NSMutableDictionary* mShapeIdMap;
	NSMutableDictionary* mEshContentIdMap;
	id<OADColorPalette> mColorPalette;
	NSMutableArray* mGroupStack;
	ESDContainer* mBstoreContainerHolder;

}

@property (nonatomic,retain) ESDContainer * bstoreContainerHolder; 
-(id)init;
-(Class)client;
-(id)initWithClient:(Class)arg1 ;
-(void)pushGroup:(id)arg1 ;
-(void)setColorPalette:(id)arg1 ;
-(id)colorPalette;
-(BOOL)isInsideGroup;
-(id)peekGroup;
-(id)drawableForShapeId:(int)arg1 ;
-(void)setDrawable:(id)arg1 forShapeId:(unsigned)arg2 ;
-(void)resetForNewDrawing;
-(id)popGroup;
-(id)groupStackReference;
-(BOOL)useXmlBlobs;
-(ESDContainer *)bstoreContainerHolder;
-(id)contentObjectForId:(int)arg1 ;
-(void)setContentObject:(id)arg1 forId:(int)arg2 ;
-(int)groupDepth;
-(id)xmlDrawingState;
-(void)setBstoreContainerHolder:(ESDContainer *)arg1 ;
@end

