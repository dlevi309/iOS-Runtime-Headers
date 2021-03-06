/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSReading/TSPObject.h>

@class NSArray, TSPObject;

@interface TSPPasteboardObject : TSPObject {

	BOOL _isCrossAppPaste;
	BOOL _isCrossDocumentPaste;
	BOOL _isTextPrimary;
	BOOL _isSmartCopyPaste;
	NSArray* _drawables;
	NSArray* _styles;
	TSPObject* _stylesheet;
	TSPObject* _wpStorage;
	TSPObject* _guideStorage;
	NSArray* _topLevelObjects;
	TSPObject* _appNativeObject;
	TSPObject* _nativeContentDescription;

}

@property (nonatomic,copy) NSArray * drawables;                                 //@synthesize drawables=_drawables - In the implementation block
@property (nonatomic,copy) NSArray * styles;                                    //@synthesize styles=_styles - In the implementation block
@property (nonatomic,retain) TSPObject * stylesheet;                            //@synthesize stylesheet=_stylesheet - In the implementation block
@property (nonatomic,retain) TSPObject * wpStorage;                             //@synthesize wpStorage=_wpStorage - In the implementation block
@property (nonatomic,retain) TSPObject * guideStorage;                          //@synthesize guideStorage=_guideStorage - In the implementation block
@property (nonatomic,retain) NSArray * topLevelObjects;                         //@synthesize topLevelObjects=_topLevelObjects - In the implementation block
@property (nonatomic,retain) TSPObject * appNativeObject;                       //@synthesize appNativeObject=_appNativeObject - In the implementation block
@property (nonatomic,readonly) BOOL isCrossAppPaste;                            //@synthesize isCrossAppPaste=_isCrossAppPaste - In the implementation block
@property (nonatomic,readonly) BOOL isCrossDocumentPaste;                       //@synthesize isCrossDocumentPaste=_isCrossDocumentPaste - In the implementation block
@property (assign,nonatomic) BOOL isTextPrimary;                                //@synthesize isTextPrimary=_isTextPrimary - In the implementation block
@property (assign,nonatomic) BOOL isSmartCopyPaste;                             //@synthesize isSmartCopyPaste=_isSmartCopyPaste - In the implementation block
@property (nonatomic,retain) TSPObject * nativeContentDescription;              //@synthesize nativeContentDescription=_nativeContentDescription - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(void)setStyles:(NSArray *)arg1 ;
-(NSArray *)styles;
-(NSArray *)drawables;
-(TSPObject *)stylesheet;
-(TSPObject *)wpStorage;
-(void)setStylesheet:(TSPObject *)arg1 ;
-(void)setTopLevelObjects:(NSArray *)arg1 ;
-(NSArray *)topLevelObjects;
-(void)setDrawables:(NSArray *)arg1 ;
-(long long)tsp_identifier;
-(TSPObject *)guideStorage;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)isCrossAppPaste;
-(BOOL)isCrossDocumentPaste;
-(void)setWpStorage:(TSPObject *)arg1 ;
-(void)setGuideStorage:(TSPObject *)arg1 ;
-(TSPObject *)appNativeObject;
-(void)setAppNativeObject:(TSPObject *)arg1 ;
-(BOOL)isTextPrimary;
-(void)setIsTextPrimary:(BOOL)arg1 ;
-(BOOL)isSmartCopyPaste;
-(void)setIsSmartCopyPaste:(BOOL)arg1 ;
-(TSPObject *)nativeContentDescription;
-(void)setNativeContentDescription:(TSPObject *)arg1 ;
@end

