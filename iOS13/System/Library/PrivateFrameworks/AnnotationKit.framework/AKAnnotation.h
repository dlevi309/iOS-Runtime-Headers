/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	long long _predConformsToAKStrokedAnnotationProtocol;
	BOOL _conformsToAKStrokedAnnotationProtocol;
	long long _predConformsToAKFilledAnnotationProtocol;
	BOOL _conformsToAKFilledAnnotationProtocol;
	long long _predConformsToAKRectangularAnnotationProtocol;
	BOOL _conformsToAKRectangularAnnotationProtocol;
	long long _predConformsToAKFlippableAnnotationProtocol;
	BOOL _conformsToAKFlippableAnnotationProtocol;
	long long _predConformsToAKRotatableAnnotationProtocol;
	BOOL _conformsToAKRotatableAnnotationProtocol;
	long long _predConformsToAKTextAnnotationProtocol;
	BOOL _conformsToAKTextAnnotationProtocol;
	long long _predConformsToAKParentAnnotationProtocol;
	BOOL _conformsToAKParentAnnotationProtocol;
	long long _predConformsToAKChildAnnotationProtocol;
	BOOL _conformsToAKChildAnnotationProtocol;
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
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)UUID;
-(id)dataRepresentation;
-(NSDate *)modificationDate;
-(NSString *)displayName;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(CGRect)drawingBounds;
-(BOOL)isTranslating;
-(void)setModificationDate:(NSDate *)arg1 ;
-(long long)originalExifOrientation;
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
-(NSString *)customPlaceholderText;
-(void)setCustomPlaceholderText:(NSString *)arg1 ;
-(BOOL)conformsToAKRotatableAnnotationProtocol;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(void)setIsTranslating:(BOOL)arg1 ;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(void)translateBy:(CGPoint)arg1 ;
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
-(BOOL)isEdited;
-(void)setIsEdited:(BOOL)arg1 ;
-(BOOL)editsDisableAppearanceOverride;
-(void)setAkSerializationVersion:(long long)arg1 ;
-(void)setAkSerializationPlatform:(long long)arg1 ;
-(long long)akSerializationPlatform;
-(BOOL)isBeingCopied;
-(CGRect)initialDrawingBoundsForAppearanceOverride;
-(BOOL)isUsingAppearanceOverride;
-(BOOL)conformsToAKChildAnnotationProtocol;
-(void)setIsDraggingHandle:(BOOL)arg1 ;
@end

