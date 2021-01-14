/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CACLabeledElementsCollection : NSObject <NSCopying> {

	NSArray* _axElements;
	NSMutableDictionary* _cachedElementsByTitle;
	NSMutableDictionary* _cachedElementsByTrait;
	NSMutableArray* _cachedElementsSorted;
	double _currentCollectionTransactionID;
	double _cachedCollectionTransactionID;
	BOOL _areElementsNumbered;
	double _finishedTime;

}

@property (retain) NSArray * axElements;                                //@synthesize axElements=_axElements - In the implementation block
@property (readonly) double cachedCollectionTransactionID;              //@synthesize cachedCollectionTransactionID=_cachedCollectionTransactionID - In the implementation block
@property (readonly) double finishedTime;                               //@synthesize finishedTime=_finishedTime - In the implementation block
@property (assign) BOOL areElementsNumbered;                            //@synthesize areElementsNumbered=_areElementsNumbered - In the implementation block
+(id)labeledElementsFromTextMarkerRanges:(id)arg1 axElement:(id)arg2 ;
-(id)init;
-(id)_initWithCollection:(id)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)collectionCount;
-(void)updateWithAXElements:(id)arg1 ;
-(BOOL)areElementsNumbered;
-(id)copyTableOfCollectedElementsByTitle;
-(id)collectedElements;
-(id)collectedElementsWithTitle:(id)arg1 ;
-(id)collectedElementsWithTrait:(unsigned long long)arg1 ;
-(BOOL)isCollecting;
-(void)setAreElementsNumbered:(BOOL)arg1 ;
-(NSArray *)axElements;
-(id)copyTableOfCollectedElementsByTrait;
-(id)copyListOfCollectedElementsSorted;
-(void)cancelCollecting;
-(void)addLabeledElementWithItemElement:(id)arg1 elementsByTitle:(id)arg2 elementsByTrait:(id)arg3 elementsSorted:(id)arg4 ;
-(id)_keyFromTrait:(unsigned long long)arg1 ;
-(void)flushCollection;
-(id)newlyCollectedElements;
-(void)resetCollectedFlagForAllElements;
-(void)setAxElements:(NSArray *)arg1 ;
-(double)cachedCollectionTransactionID;
-(double)finishedTime;
@end

