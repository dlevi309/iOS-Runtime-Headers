/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSTextStorageControllerPrivate;
@class NSMutableArray, NSArray;

@interface NSTextStorage : NSMutableAttributedString <NSSecureCoding> {

	NSRange _editedRange;
	long long _editedDelta;
	struct {
		unsigned editedMask : 8;
		unsigned postWillProcess : 1;
		unsigned postDidProcess : 1;
		unsigned  : 6;
		unsigned disabled : 16;
	}  _flags;
	NSMutableArray* _layoutManagers;
	id _sideData;
	id<NSTextStorageControllerPrivate> _textStorageController;
	BOOL _ensuresFixingAttributes;

}

@property (assign) BOOL ensuresFixingAttributes;                                     //@synthesize ensuresFixingAttributes=_ensuresFixingAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * layoutManagers; 
@property (nonatomic,readonly) unsigned long long editedMask; 
@property (nonatomic,readonly) NSRange editedRange; 
@property (nonatomic,readonly) long long changeInLength; 
@property (assign,nonatomic,__weak) id<NSTextStorageDelegate> delegate; 
@property (nonatomic,readonly) BOOL fixesAttributesLazily; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setEditedRange:(NSRange)arg1 ;
-(void)_UIUndoRedoTextOperation:(id)arg1 ;
-(id)_UIUndoRedoAttributedSubstringFromRange:(NSRange)arg1 ;
-(id)cuiStyleEffects;
-(void)_setForceFixAttributes:(BOOL)arg1 ;
-(BOOL)_attributeFixingInProgress;
-(BOOL)_lockForReading;
-(void)_unlock;
-(void)_setAttributeFixingInProgress:(BOOL)arg1 ;
-(BOOL)fixesAttributesLazily;
-(BOOL)_forceFixAttributes;
-(BOOL)_lockForWritingWithExceptionHandler:(BOOL)arg1 ;
-(BOOL)_lockForWriting;
-(void)finalize;
-(id)init;
-(void)setTextStorageController:(id)arg1 ;
-(void)setEnsuresFixingAttributes:(BOOL)arg1 ;
-(long long)changeInLength;
-(void)invalidateAttributesInRange:(NSRange)arg1 ;
-(void)_notifyEdited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 invalidatedRange:(NSRange)arg4 ;
-(id<NSTextStorageDelegate>)delegate;
-(void)_setEditedRange:(NSRange)arg1 ;
-(id)textStorageController;
-(BOOL)ensuresFixingAttributes;
-(void)setEditedMask:(unsigned long long)arg1 ;
-(NSRange)_rangeByEstimatingAttributeFixingForRange:(NSRange)arg1 ;
-(void)ensureAttributesAreFixedInRange:(NSRange)arg1 ;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<NSTextStorageDelegate>)arg1 ;
-(void)addLayoutManager:(id)arg1 ;
-(void)coordinateReading:(/*^block*/id)arg1 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(unsigned long long)editedMask;
-(BOOL)_isEditing;
-(Class)classForCoder;
-(void)endEditing;
-(NSRange)editedRange;
-(void)processEditing;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_shouldSetOriginalFontAttribute;
-(void)fontSetChanged;
-(void)coordinateAccess:(/*^block*/id)arg1 ;
-(void)coordinateEditing:(/*^block*/id)arg1 ;
-(BOOL)_usesSimpleTextEffects;
-(NSArray *)layoutManagers;
-(void)removeLayoutManager:(id)arg1 ;
-(void)dealloc;
-(id)cuiCatalog;
-(void)beginEditing;
@end

