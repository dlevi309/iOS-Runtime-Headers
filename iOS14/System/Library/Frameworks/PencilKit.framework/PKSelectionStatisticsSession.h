/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSMutableArray, NSDate, NSString, NSDictionary;

@interface PKSelectionStatisticsSession : NSObject {

	NSMutableArray* _selectionGestures;
	NSMutableArray* _selectionActions;
	NSDate* _startTime;
	double _timeSpentSelecting;
	long long _numberOfTimesSelectionWasClearedInASession;
	long long _selectionGestureCount;
	NSString* _lastActionTaken;
	NSString* _lastSignificantActionTaken;
	long long _lastSelectionType;
	long long _lastContentType;

}

@property (nonatomic,readonly) NSDictionary * selectionGestureDictionary; 
@property (nonatomic,readonly) NSDictionary * selectionActionDictionary; 
@property (assign,nonatomic) double timeSpentSelecting;                                         //@synthesize timeSpentSelecting=_timeSpentSelecting - In the implementation block
@property (assign,nonatomic) long long numberOfTimesSelectionWasClearedInASession;              //@synthesize numberOfTimesSelectionWasClearedInASession=_numberOfTimesSelectionWasClearedInASession - In the implementation block
@property (assign,nonatomic) long long selectionGestureCount;                                   //@synthesize selectionGestureCount=_selectionGestureCount - In the implementation block
@property (nonatomic,retain) NSString * lastActionTaken;                                        //@synthesize lastActionTaken=_lastActionTaken - In the implementation block
@property (nonatomic,retain) NSString * lastSignificantActionTaken;                             //@synthesize lastSignificantActionTaken=_lastSignificantActionTaken - In the implementation block
@property (assign,nonatomic) long long lastSelectionType;                                       //@synthesize lastSelectionType=_lastSelectionType - In the implementation block
@property (assign,nonatomic) long long lastContentType;                                         //@synthesize lastContentType=_lastContentType - In the implementation block
-(id)init;
-(void)logSelectionAction:(long long)arg1 ;
-(void)logGesture:(long long)arg1 selectionType:(long long)arg2 contentType:(long long)arg3 ;
-(double)timeSpentSelecting;
-(NSDictionary *)selectionGestureDictionary;
-(NSDictionary *)selectionActionDictionary;
-(long long)numberOfTimesSelectionWasClearedInASession;
-(NSString *)lastActionTaken;
-(NSString *)lastSignificantActionTaken;
-(void)setTimeSpentSelecting:(double)arg1 ;
-(void)setNumberOfTimesSelectionWasClearedInASession:(long long)arg1 ;
-(long long)selectionGestureCount;
-(void)setSelectionGestureCount:(long long)arg1 ;
-(void)setLastActionTaken:(NSString *)arg1 ;
-(void)setLastSignificantActionTaken:(NSString *)arg1 ;
-(long long)lastSelectionType;
-(void)setLastSelectionType:(long long)arg1 ;
-(long long)lastContentType;
-(void)setLastContentType:(long long)arg1 ;
@end

