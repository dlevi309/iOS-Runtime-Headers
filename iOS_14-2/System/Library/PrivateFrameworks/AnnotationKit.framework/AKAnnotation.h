/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface AKAnnotation : NSObject <NSSecureCoding, NSCopying> {

	/*^block*/id _appearanceOverride;
	BOOL _shouldUseAppearanceOverride;
	BOOL _isObservingForAppearance;
	CGPDFDocumentRef _appearanceOverridePDF;
	BOOL _isObservingForIsEdited;
	BOOL _isReallyObservingForIsEdited;
	BOOL _conformsToAKStrokedAnnotationProtocol;
	BOOL _conformsToAKFilledAnnotationProtocol;
	BOOL _conformsToAKRectangularAnnotationProtocol;
	BOOL _conformsToAKFlippableAnnotationProtocol;
	BOOL _conformsToAKRotatableAnnotationProtocol;
	BOOL _conformsToAKTextAnnotationProtocol;
	BOOL _conformsToAKParentAnnotationProtocol;
	BOOL _editsDisableAppearanceOverride;
	BOOL _isEdited;
	BOOL _isTranslating;
	BOOL _isDraggingHandle;
	BOOL _isEditingText;
	BOOL _textIsFixedWidth;
	BOOL _textIsFixedHeight;
	BOOL _textIsClipped;
	BOOL _shouldUsePlaceholderText;
	BOOL _isBeingCopied;
	NSString* _UUID;
	NSString* _customPlaceholderText;
	double _originalModelBaseScaleFactor;
	long long _originalExifOrientation;
	NSDate* _modificationDate;
	NSString* _author;
	long long _akSerializationVersion;
	long long _akSerializationPlatform;
	AKAnnotation* _parentAnnotation;
	AKAnnotation* _childAnnotation;
	CGRect _initialDrawingBoundsForAppearanceOverride;

}

@property (assign) BOOL isEdited;                                                 //@synthesize isEdited=_isEdited - In the implementation block
@property (assign) long long akSerializationVersion;                              //@synthesize akSerializationVersion=_akSerializationVersion - In the implementation block
@property (assign) long long akSerializationPlatform;                             //@synthesize akSerializationPlatform=_akSerializationPlatform - In the implementation block
@property (assign) BOOL isEditingText;                                            //@synthesize isEditingText=_isEditingText - In the implementation block
@property (assign) BOOL textIsFixedWidth;                                         //@synthesize textIsFixedWidth=_textIsFixedWidth - In the implementation block
@property (assign) BOOL textIsFixedHeight;                                        //@synthesize textIsFixedHeight=_textIsFixedHeight - In the implementation block
@property (assign) BOOL textIsClipped;                                            //@synthesize textIsClipped=_textIsClipped - In the implementation block
@property (assign) BOOL shouldUsePlaceholderText;                                 //@synthesize shouldUsePlaceholderText=_shouldUsePlaceholderText - In the implementation block
@property (__weak) AKAnnotation * parentAnnotation;                               //@synthesize parentAnnotation=_parentAnnotation - In the implementation block
@property (__weak) AKAnnotation * childAnnotation;                                //@synthesize childAnnotation=_childAnnotation - In the implementation block
@property (assign) CGRect initialDrawingBoundsForAppearanceOverride;              //@synthesize initialDrawingBoundsForAppearanceOverride=_initialDrawingBoundsForAppearanceOverride - In the implementation block
@property (assign) BOOL shouldUseAppearanceOverride; 
@property (assign) BOOL shouldObserveEdits; 
@property (assign) BOOL isBeingCopied;                                            //@synthesize isBeingCopied=_isBeingCopied - In the implementation block
@property (readonly) NSString * UUID;                                             //@synthesize UUID=_UUID - In the implementation block
@property (readonly) NSString * displayName; 
@property (copy) NSString * customPlaceholderText;                                //@synthesize customPlaceholderText=_customPlaceholderText - In the implementation block
@property (assign,nonatomic) double originalModelBaseScaleFactor;                 //@synthesize originalModelBaseScaleFactor=_originalModelBaseScaleFactor - In the implementation block
@property (assign,nonatomic) long long originalExifOrientation;                   //@synthesize originalExifOrientation=_originalExifOrientation - In the implementation block
@property (readonly) CGRect hitTestBounds; 
@property (readonly) CGRect drawingBounds; 
@property (readonly) CGRect integralDrawingBounds; 
@property (copy) id appearanceOverride; 
@property (readonly) BOOL isUsingAppearanceOverride; 
@property (assign) BOOL editsDisableAppearanceOverride;                           //@synthesize editsDisableAppearanceOverride=_editsDisableAppearanceOverride - In the implementation block
@property (readonly) BOOL shouldBurnIn; 
@property (retain) NSDate * modificationDate;                                     //@synthesize modificationDate=_modificationDate - In the implementation block
@property (copy) NSString * author;                                               //@synthesize author=_author - In the implementation block
@property (assign) BOOL isTranslating;                                            //@synthesize isTranslating=_isTranslating - In the implementation block
@property (assign) BOOL isDraggingHandle;                                         //@synthesize isDraggingHandle=_isDraggingHandle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)annotationWithData:(id)arg1 ;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
+(id)defaultPlaceholderText;
-(NSDate *)modificationDate;
-(BOOL)isTranslating;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)dataRepresentation;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)UUID;
-(id)init;
-(CGRect)drawingBounds;
-(long long)originalExifOrientation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCustomPlaceholderText:(NSString *)arg1 ;
-(NSString *)customPlaceholderText;
-(BOOL)isEdited;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)dealloc;
-(void)translateBy:(CGPoint)arg1 ;
-(BOOL)shouldBurnIn;
-(AKAnnotation *)parentAnnotation;
-(void)setAppearanceOverride:(id)arg1 ;
-(void)setEditsDisableAppearanceOverride:(BOOL)arg1 ;
-(BOOL)isEditingText;
-(void)setIsEditingText:(BOOL)arg1 ;
-(BOOL)textIsFixedWidth;
-(void)setTextIsFixedWidth:(BOOL)arg1 ;
-(BOOL)textIsFixedHeight;
-(void)setTextIsFixedHeight:(BOOL)arg1 ;
-(BOOL)textIsClipped;
-(void)setTextIsClipped:(BOOL)arg1 ;
-(BOOL)shouldUsePlaceholderText;
-(void)setShouldUsePlaceholderText:(BOOL)arg1 ;
-(id)appearanceOverride;
-(void)setParentAnnotation:(AKAnnotation *)arg1 ;
-(AKAnnotation *)childAnnotation;
-(void)setChildAnnotation:(AKAnnotation *)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(double)originalModelBaseScaleFactor;
-(void)setOriginalModelBaseScaleFactor:(double)arg1 ;
-(void)setOriginalExifOrientation:(long long)arg1 ;
-(CGRect)integralDrawingBounds;
-(BOOL)conformsToAKRotatableAnnotationProtocol;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(void)setIsTranslating:(BOOL)arg1 ;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(id)keysForValuesToObserveForAdornments;
-(BOOL)conformsToAKRectangularAnnotationProtocol;
-(BOOL)conformsToAKTextAnnotationProtocol;
-(long long)akSerializationVersion;
-(BOOL)conformsToAKFilledAnnotationProtocol;
-(BOOL)conformsToAKParentAnnotationProtocol;
-(BOOL)conformsToAKStrokedAnnotationProtocol;
-(void)setShouldUseAppearanceOverride:(BOOL)arg1 ;
-(BOOL)isDraggingHandle;
-(BOOL)shouldObserveEdits;
-(void)setShouldObserveEdits:(BOOL)arg1 ;
-(BOOL)shouldUseAppearanceOverride;
-(void)setIsBeingCopied:(BOOL)arg1 ;
-(BOOL)conformsToAKFlippableAnnotationProtocol;
-(void)setInitialDrawingBoundsForAppearanceOverride:(CGRect)arg1 ;
-(void)setIsEdited:(BOOL)arg1 ;
-(BOOL)editsDisableAppearanceOverride;
-(void)setAkSerializationVersion:(long long)arg1 ;
-(void)setAkSerializationPlatform:(long long)arg1 ;
-(long long)akSerializationPlatform;
-(BOOL)isBeingCopied;
-(CGRect)initialDrawingBoundsForAppearanceOverride;
-(BOOL)isUsingAppearanceOverride;
-(void)setIsDraggingHandle:(BOOL)arg1 ;
@end

