/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDShapeInfo.h>
#import <TSReading/TSDContainerInfo.h>
#import <TSReading/TSWPStorageParent.h>
#import <TSReading/TSDSelectionStatisticsContributor.h>

@class TSWPStorage, TSWPLineHintCollection, NSString, TSWPPadding, TSWPColumns, TSWPShapeStyle, TSDInfoGeometry;

@interface TSWPShapeInfo : TSDShapeInfo <TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor> {

	TSWPStorage* _containedStorage;
	BOOL _textUserEditable;
	TSWPLineHintCollection* mLineHints;

}

@property (nonatomic,retain) TSWPStorage * containedStorage;                                           //@synthesize containedStorage=_containedStorage - In the implementation block
@property (nonatomic,readonly) BOOL displaysInstructionalText; 
@property (nonatomic,readonly) NSString * instructionalText; 
@property (assign,nonatomic) BOOL shrinkTextToFit; 
@property (assign,nonatomic) BOOL textIsVertical; 
@property (assign,nonatomic) BOOL allowsLastLineTruncation; 
@property (assign,nonatomic) unsigned maxLineCount; 
@property (assign,nonatomic) unsigned verticalAlignment; 
@property (assign,nonatomic) long long contentWritingDirection; 
@property (nonatomic,retain) TSWPPadding * padding; 
@property (nonatomic,retain) TSWPColumns * columns; 
@property (nonatomic,readonly) TSWPShapeStyle * tswpShapeStyle; 
@property (nonatomic,retain) TSWPLineHintCollection * lineHints; 
@property (assign,getter=isTextUserEditable,nonatomic) BOOL textUserEditable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
+(void)setDefaultInstructionalText:(id)arg1 ;
-(void)dealloc;
-(TSWPColumns *)columns;
-(void)setColumns:(TSWPColumns *)arg1 ;
-(void)setPadding:(TSWPPadding *)arg1 ;
-(unsigned)verticalAlignment;
-(void)setVerticalAlignment:(unsigned)arg1 ;
-(TSWPPadding *)padding;
-(Class)layoutClass;
-(id)childEnumerator;
-(id)copyWithContext:(id)arg1 ;
-(BOOL)shrinkTextToFit;
-(void)acceptVisitor:(id)arg1 ;
-(Class)repClass;
-(id)childInfos;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(BOOL)textIsVertical;
-(BOOL)allowsLastLineTruncation;
-(unsigned)maxLineCount;
-(id)presetKind;
-(unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3 ;
-(CGPoint)transformableObjectAnchorPoint;
-(Class)editorClass;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 ;
-(Class)styleClass;
-(BOOL)supportsTextInset;
-(BOOL)supportsShrinkTextToFit;
-(void)processSelectedStoragesWithStatisticsController:(id)arg1 ;
-(id)stylesForCopyStyle;
-(id)propertyMapForNewPreset;
-(id)styleIdentifierTemplateForNewPreset;
-(TSWPLineHintCollection *)lineHints;
-(TSWPStorage *)containedStorage;
-(BOOL)isTextUserEditable;
-(void)setTextIsVertical:(BOOL)arg1 ;
-(void)setContainedStorage:(TSWPStorage *)arg1 ;
-(BOOL)displaysInstructionalText;
-(NSString *)instructionalText;
-(CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1 size:(CGSize)arg2 ;
-(CGPoint)autosizePositionOffset;
-(BOOL)autoListRecognition;
-(BOOL)autoListTermination;
-(long long)contentWritingDirection;
-(void)setMaxLineCount:(unsigned)arg1 ;
-(void)setAllowsLastLineTruncation:(BOOL)arg1 ;
-(void)setTextUserEditable:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5 ;
-(double)pOffsetForVerticalAlignment:(CGSize)arg1 ;
-(double)pOffsetForParagraphAlignment:(CGSize)arg1 ;
-(CGPoint)autosizePositionOffsetForGeometry:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)p_hasContentForRange:(NSRange)arg1 ;
-(unsigned long long)p_chunkCountForByBulletGroup;
-(unsigned long long)p_chunkCountForByBullet;
-(void)setShrinkTextToFit:(BOOL)arg1 ;
-(TSWPShapeStyle *)tswpShapeStyle;
-(void)setContentWritingDirection:(long long)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 wpStorage:(id)arg4 ;
-(void)fixPositionOfImportedAutosizedShape;
-(id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2 ;
-(BOOL)p_hasListLabelOrContentForParagraphIndex:(unsigned long long)arg1 ;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(void)setLineHints:(TSWPLineHintCollection *)arg1 ;
@end

