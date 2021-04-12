/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>

@interface TSWPLineHintCollection : TSPObject {

	SCD_Struct_TS131* mHints;
	unsigned long long mHintsCount;
	BOOL mValid;
	BOOL mHasColumnIndices;
	TSWPLineHintCollection* mContainingCollection;

}

@property (nonatomic,readonly) const SCD_Struct_TS131* hints; 
@property (nonatomic,readonly) unsigned long long hintsCount; 
@property (nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) BOOL hasColumnIndices; 
-(void)dealloc;
-(BOOL)valid;
-(const SCD_Struct_TS131*)hints;
-(id)descriptionWithStorage:(id)arg1 ;
-(NSRange)hintRangeForColumnIndex:(unsigned long long)arg1 frameBounds:(CGRect)arg2 charIndex:(unsigned long long)arg3 ;
-(NSRange)hintRangeForLineStartingAtHintIndex:(unsigned long long)arg1 ;
-(BOOL)hasColumnIndices;
-(BOOL)checkSubCollectionRange:(NSRange)arg1 ;
-(id)initWithContainingCollection:(id)arg1 range:(NSRange)arg2 context:(id)arg3 ;
-(unsigned long long)hintsCount;
-(unsigned long long)p_columnIndexForHintIndex:(unsigned long long)arg1 ;
-(id)newSubCollectionWithRange:(NSRange)arg1 ;
@end

