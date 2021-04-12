/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineLayoutScreenUtils, CUIKSingleDayTimelineGeometryDelegate;
@class CUIKSingleDayTimelineLayoutPartition, NSMutableArray, NSArray;

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject {

	id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtBeginning;
	id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtEnd;
	id<CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;
	BOOL _useTemporaryFitnessLevel;
	BOOL _temporaryFitnessLevelRequiresCalculation;
	double _temporaryFitnessLevel;
	BOOL _originalFitnessLevelRequiresCalculation;
	double _originalFitnessLevel;
	BOOL _ignoreFirstOccurrenceInFitnessCalculations;
	BOOL _ignoreLastOccurrenceInFitnessCalculations;
	BOOL _isOnlyBucket;
	CUIKSingleDayTimelineLayoutPartition* _correspondingPartition;
	id<CUIKSingleDayTimelineGeometryDelegate> _geometryDelegate;
	NSMutableArray* _currentOccurrences;

}

@property (nonatomic,retain) CUIKSingleDayTimelineLayoutPartition * correspondingPartition;              //@synthesize correspondingPartition=_correspondingPartition - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentOccurrences;                                        //@synthesize currentOccurrences=_currentOccurrences - In the implementation block
@property (nonatomic,readonly) NSArray * occurrences; 
@property (assign,nonatomic) BOOL isOnlyBucket;                                                          //@synthesize isOnlyBucket=_isOnlyBucket - In the implementation block
@property (__weak) id<CUIKSingleDayTimelineGeometryDelegate> geometryDelegate;                           //@synthesize geometryDelegate=_geometryDelegate - In the implementation block
-(void)setGeometryDelegate:(id<CUIKSingleDayTimelineGeometryDelegate>)arg1 ;
-(id<CUIKSingleDayTimelineGeometryDelegate>)geometryDelegate;
-(id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3 geometryDelegate:(id)arg4 ;
-(void)stampFramesOntoOccurrences;
-(NSMutableArray *)currentOccurrences;
-(void)makeTemporaryChangesPermanent;
-(id)earliestOccurrence;
-(void)removeOccurrenceAtBeginningTemporarily;
-(BOOL)isOnlyBucket;
-(id)_occurrencesForFitnessLevel;
-(NSArray *)occurrences;
-(id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3 ;
-(void)removeOccurrenceAtEndTemporarily;
-(void)revertTemporaryChanges;
-(void)setCurrentOccurrences:(NSMutableArray *)arg1 ;
-(void)addOccurrenceTemporarilyToBeginning:(id)arg1 ;
-(void)addOccurrenceTemporarilyToEnd:(id)arg1 ;
-(void)setIsOnlyBucket:(BOOL)arg1 ;
-(void)setCorrespondingPartition:(CUIKSingleDayTimelineLayoutPartition *)arg1 ;
-(CUIKSingleDayTimelineLayoutPartition *)correspondingPartition;
@end

