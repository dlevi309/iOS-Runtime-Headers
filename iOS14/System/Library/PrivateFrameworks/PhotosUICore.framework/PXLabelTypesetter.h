/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableLabelTypesetter.h>

@class NSAttributedString, NSArray;

@interface PXLabelTypesetter : PXObservable <PXMutableLabelTypesetter> {

	BOOL _adjustsFontSizeToFitWidth;
	BOOL _allowTruncation;
	CGContextRef _context;
	NSAttributedString* _attributedString;
	long long _typesettingMode;
	unsigned long long _maximumNumberOfLines;
	double _minimumScaleFactor;
	double _minimumTruncatedScaleFactor;
	NSArray* _lines;
	CGRect _bounds;

}

@property (nonatomic,copy) NSAttributedString * attributedString;                  //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                        //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) long long typesettingMode;                            //@synthesize typesettingMode=_typesettingMode - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfLines;              //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth;                       //@synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                            //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL allowTruncation;                                 //@synthesize allowTruncation=_allowTruncation - In the implementation block
@property (assign,nonatomic) double minimumTruncatedScaleFactor;                   //@synthesize minimumTruncatedScaleFactor=_minimumTruncatedScaleFactor - In the implementation block
@property (nonatomic,readonly) CGContextRef context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * lines;                                    //@synthesize lines=_lines - In the implementation block
-(CGRect)bounds;
-(NSArray *)lines;
-(unsigned long long)maximumNumberOfLines;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(id)init;
-(void)setTypesettingMode:(long long)arg1 ;
-(double)minimumTruncatedScaleFactor;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(id)initWithContext:(CGContextRef)arg1 ;
-(long long)typesettingMode;
-(unsigned long long)_adjustCutoffLocation:(unsigned long long)arg1 forLineStartingAtIndex:(unsigned long long)arg2 ;
-(void)didPerformChanges;
-(NSAttributedString *)attributedString;
-(BOOL)adjustsFontSizeToFitWidth;
-(CGContextRef)context;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)allowTruncation;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(void)setMinimumTruncatedScaleFactor:(double)arg1 ;
-(void)_updateLines;
-(void)setAllowTruncation:(BOOL)arg1 ;
-(id)mutableChangeObject;
-(void)shiftLinesVerticallyToAvoidOverlap:(id)arg1 referenceFont:(id)arg2 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)_allowTextOverlapForFont:(id)arg1 ;
-(double)minimumScaleFactor;
-(void)_setLines:(id)arg1 ;
@end

