/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSTextStorageController;
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
	id<NSTextStorageController> _textStorageController;

}

@property (nonatomic,copy,readonly) NSArray * layoutManagers; 
@property (nonatomic,readonly) unsigned long long editedMask; 
@property (nonatomic,readonly) NSRange editedRange; 
@property (nonatomic,readonly) long long changeInLength; 
@property (assign,nonatomic,__weak) id<NSTextStorageDelegate> delegate; 
@property (nonatomic,readonly) BOOL fixesAttributesLazily; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)setEditedRange:(NSRange)arg1 ;
-(void)_undoRedoTextOperation:(id)arg1 ;
-(id)_undoRedoAttributedSubstringFromRange:(NSRange)arg1 ;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(void)beginEditing;
-(void)endEditing;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id<NSTextStorageDelegate>)delegate;
-(void)setDelegate:(id<NSTextStorageDelegate>)arg1 ;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(id)cuiCatalog;
-(BOOL)_usesSimpleTextEffects;
-(BOOL)_isEditing;
-(BOOL)_lockForReading;
-(void)_unlock;
-(void)_setForceFixAttributes:(BOOL)arg1 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(id)cuiStyleEffects;
-(void)addLayoutManager:(id)arg1 ;
-(void)processEditing;
-(NSArray *)layoutManagers;
-(void)removeLayoutManager:(id)arg1 ;
-(BOOL)_lockForWriting;
-(void)coordinateAccess:(/*^block*/id)arg1 ;
-(BOOL)_attributeFixingInProgress;
-(void)_setAttributeFixingInProgress:(BOOL)arg1 ;
-(BOOL)_shouldSetOriginalFontAttribute;
-(void)setTextStorageController:(id)arg1 ;
-(NSRange)editedRange;
-(void)invalidateAttributesInRange:(NSRange)arg1 ;
-(unsigned long long)editedMask;
-(long long)changeInLength;
-(void)_notifyEdited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 invalidatedRange:(NSRange)arg4 ;
-(void)fontSetChanged;
-(void)_setEditedRange:(NSRange)arg1 ;
-(BOOL)_lockForWritingWithExceptionHandler:(BOOL)arg1 ;
-(id)textStorageController;
-(BOOL)fixesAttributesLazily;
-(NSRange)_rangeByEstimatingAttributeFixingForRange:(NSRange)arg1 ;
-(BOOL)_forceFixAttributes;
-(void)coordinateReading:(/*^block*/id)arg1 ;
-(void)coordinateEditing:(/*^block*/id)arg1 ;
-(void)setEditedMask:(unsigned long long)arg1 ;
-(void)ensureAttributesAreFixedInRange:(NSRange)arg1 ;
@end

