/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSWPAttachment.h>

@class TSDDrawableInfo;

@interface TSWPDrawableAttachment : TSWPAttachment {

	TSDDrawableInfo* _drawableInfo;
	int _hOffsetType;
	double _hOffset;
	int _vOffsetType;
	double _vOffset;
	int _vAlignment;
	double _attachmentAnchorY;

}

@property (nonatomic,retain,readonly) TSDDrawableInfo * drawable;              //@synthesize drawableInfo=_drawableInfo - In the implementation block
@property (assign,nonatomic) int hOffsetType;                                  //@synthesize hOffsetType=_hOffsetType - In the implementation block
@property (assign,nonatomic) double hOffset;                                   //@synthesize hOffset=_hOffset - In the implementation block
@property (assign,nonatomic) int vOffsetType;                                  //@synthesize vOffsetType=_vOffsetType - In the implementation block
@property (assign,nonatomic) double vOffset;                                   //@synthesize vOffset=_vOffset - In the implementation block
@property (nonatomic,readonly) double descent; 
@property (assign,nonatomic) int vAlignment;                                   //@synthesize vAlignment=_vAlignment - In the implementation block
@property (assign,nonatomic) double attachmentAnchorY;                         //@synthesize attachmentAnchorY=_attachmentAnchorY - In the implementation block
+(void)setPositionerClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)invalidate;
-(BOOL)isDrawable;
-(int)elementKind;
-(BOOL)isAnchored;
-(double)descent;
-(BOOL)isSearchable;
-(id)copyWithContext:(id)arg1 ;
-(TSDDrawableInfo *)drawable;
-(id)initWithContext:(id)arg1 drawable:(id)arg2 ;
-(void)setHOffset:(double)arg1 ;
-(void)setVOffset:(double)arg1 ;
-(void)setVAlignment:(int)arg1 ;
-(void)setAttachmentAnchorY:(double)arg1 ;
-(BOOL)isHTMLWrap;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(unsigned long long)enabledKnobMask;
-(BOOL)specifiesEnabledKnobMask;
-(void)setParentStorage:(id)arg1 ;
-(void)setHOffsetType:(int)arg1 ;
-(void)setVOffsetType:(int)arg1 ;
-(id)detachDrawable;
-(void)attachDrawable:(id)arg1 ;
-(BOOL)isPartitioned;
-(Class)positionerClass;
-(void)infoChanged;
-(int)hOffsetType;
-(double)hOffset;
-(int)vOffsetType;
-(double)vOffset;
-(int)vAlignment;
-(double)attachmentAnchorY;
-(id)textStorages;
-(id)textRepresentationForCopy;
@end

