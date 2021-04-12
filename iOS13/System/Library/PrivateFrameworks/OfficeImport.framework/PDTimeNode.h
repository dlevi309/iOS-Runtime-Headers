/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray, PDIterate, NSString, NSDictionary;

@interface PDTimeNode : NSObject {

	NSMutableArray* mStartTimeConditions;
	NSMutableArray* mEndTimeConditions;
	NSMutableArray* mChildTimeNodeList;
	NSMutableArray* mSubTimeNodeList;
	PDIterate* mIterate;
	int mType;
	int mAnimationPresetClass;
	BOOL mHasPresetId;
	int mPresetId;
	BOOL mHasPresetSubType;
	int mPresetSubType;
	BOOL mHasRepeatCount;
	int mRepeatCount;
	BOOL mHasRepeatDuration;
	int mRepeatDuration;
	int mRestartType;
	BOOL mHasDuration;
	double mDuration;
	BOOL mHasSpeed;
	double mSpeed;
	BOOL mHasAcceleration;
	double mAcceleration;
	BOOL mHasDeceleration;
	double mDeceleration;
	BOOL mHasDisplay;
	BOOL mDisplay;
	BOOL mHasFillType;
	int mFillType;
	NSString* mGroupId;
	NSDictionary* attributeMap;

}

@property (nonatomic,retain) NSDictionary * attributeMap; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(void)setRepeatCount:(int)arg1 ;
-(void)setDisplay:(BOOL)arg1 ;
-(double)acceleration;
-(BOOL)display;
-(int)repeatCount;
-(BOOL)hasType;
-(BOOL)hasSpeed;
-(id)groupId;
-(void)setGroupId:(id)arg1 ;
-(BOOL)hasDuration;
-(int)repeatDuration;
-(void)setRepeatDuration:(int)arg1 ;
-(void)setAcceleration:(double)arg1 ;
-(void)setDeceleration:(double)arg1 ;
-(double)deceleration;
-(int)fillType;
-(long long)writeDuration;
-(void)setChildTimeNodeList:(id)arg1 ;
-(id)childTimeNodeList;
-(void)setStartTimeConditions:(id)arg1 ;
-(void)setPresetId:(int)arg1 ;
-(void)setPresetSubType:(int)arg1 ;
-(void)setAnimationPresetClass:(int)arg1 ;
-(void)setGroupIdValue:(int)arg1 ;
-(int)animationPresetClass;
-(int)restartType;
-(int)presetId;
-(int)presetSubType;
-(id)startTimeConditions;
-(id)endTimeConditions;
-(id)subTimeNodeList;
-(id)iterate;
-(void)setEndTimeConditions:(id)arg1 ;
-(void)setSubTimeNodeList:(id)arg1 ;
-(void)setIterate:(id)arg1 ;
-(BOOL)hasPresetClass;
-(BOOL)hasPresetSubType;
-(BOOL)hasPresetId;
-(BOOL)hasRepeatCount;
-(BOOL)hasRepeatDuration;
-(BOOL)hasRestartType;
-(void)setRestartType:(int)arg1 ;
-(BOOL)hasAcceleration;
-(BOOL)hasDeceleration;
-(BOOL)hasFillType;
-(void)setFillType:(int)arg1 ;
-(BOOL)hasDisplay;
-(NSDictionary *)attributeMap;
-(void)setAttributeMap:(NSDictionary *)arg1 ;
-(long long)writeRepeatCount;
@end

