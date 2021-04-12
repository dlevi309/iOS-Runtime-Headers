/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)repeatCount;
-(int)repeatDuration;
-(void)setSpeed:(double)arg1 ;
-(BOOL)hasDuration;
-(void)setDuration:(double)arg1 ;
-(void)setDisplay:(BOOL)arg1 ;
-(id)init;
-(void)setRepeatDuration:(int)arg1 ;
-(double)speed;
-(void)setFillType:(int)arg1 ;
-(BOOL)hasFillType;
-(void)setRepeatCount:(int)arg1 ;
-(id)groupId;
-(BOOL)hasType;
-(void)setType:(int)arg1 ;
-(id)description;
-(BOOL)hasSpeed;
-(int)fillType;
-(void)setGroupId:(id)arg1 ;
-(double)acceleration;
-(int)type;
-(unsigned long long)hash;
-(BOOL)display;
-(void)setDeceleration:(double)arg1 ;
-(double)deceleration;
-(double)duration;
-(id)iterate;
-(void)setAcceleration:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRestartType:(int)arg1 ;
-(int)restartType;
-(long long)writeDuration;
-(void)setChildTimeNodeList:(id)arg1 ;
-(id)childTimeNodeList;
-(void)setStartTimeConditions:(id)arg1 ;
-(void)setPresetId:(int)arg1 ;
-(void)setPresetSubType:(int)arg1 ;
-(void)setAnimationPresetClass:(int)arg1 ;
-(void)setGroupIdValue:(int)arg1 ;
-(int)animationPresetClass;
-(int)presetId;
-(int)presetSubType;
-(id)startTimeConditions;
-(id)endTimeConditions;
-(id)subTimeNodeList;
-(void)setEndTimeConditions:(id)arg1 ;
-(void)setSubTimeNodeList:(id)arg1 ;
-(void)setIterate:(id)arg1 ;
-(BOOL)hasPresetClass;
-(BOOL)hasPresetSubType;
-(BOOL)hasPresetId;
-(BOOL)hasRepeatCount;
-(BOOL)hasRepeatDuration;
-(BOOL)hasRestartType;
-(BOOL)hasAcceleration;
-(BOOL)hasDeceleration;
-(BOOL)hasDisplay;
-(NSDictionary *)attributeMap;
-(void)setAttributeMap:(NSDictionary *)arg1 ;
-(long long)writeRepeatCount;
@end

