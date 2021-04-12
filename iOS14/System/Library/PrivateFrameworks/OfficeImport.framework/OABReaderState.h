/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(Class)client;
-(id)init;
-(void)setColorPalette:(id)arg1 ;
-(id)colorPalette;
-(void)pushGroup:(id)arg1 ;
-(id)initWithClient:(Class)arg1 ;
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

