/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class PDAnimationTarget, PDAnimateMotionBehavior, PDBuild, NSString;

@interface PDAnimationCache : NSObject {

	int mNodeType;
	int mPresetId;
	int mPresetSubType;
	int mPresetClass;
	PDAnimationTarget* mTarget;
	BOOL mHasDelay;
	double mDelay;
	BOOL mHasDuration;
	double mDuration;
	BOOL mHasDirection;
	double mDirection;
	BOOL mHasPartCount;
	int mPartCount;
	PDAnimateMotionBehavior* mMotionPath;
	BOOL mHasValue;
	double mValue;
	PDBuild* mBuild;
	int mIterateType;
	BOOL mIsHead;
	int mLevel;
	NSString* mGroupId;

}

@property (nonatomic,retain) PDAnimationTarget * target; 
@property (assign,nonatomic) int nodeType; 
@property (assign,nonatomic) int presetId; 
@property (assign,nonatomic) int presetSubType; 
@property (assign,nonatomic) int presetClass; 
@property (assign,nonatomic) int iterateType; 
@property (assign,nonatomic) BOOL hasDelay; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) BOOL hasDirection; 
@property (assign,nonatomic) double direction; 
@property (assign,nonatomic) BOOL hasPartCount; 
@property (assign,nonatomic) int partCount; 
@property (nonatomic,retain) PDAnimateMotionBehavior * motionPath; 
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value; 
@property (nonatomic,retain) NSString * groupId; 
@property (assign,nonatomic) BOOL isHead; 
@property (assign,nonatomic) int level; 
@property (nonatomic,retain) PDBuild * build; 
+(void)mapCommonData:(id)arg1 cacheData:(id)arg2 state:(id)arg3 ;
+(void)loadAnimationCache:(id)arg1 pdAnimation:(id)arg2 state:(id)arg3 ;
+(id)createAnimationInfoDataForCacheItem:(id)arg1 order:(unsigned)arg2 ;
+(void)mapAnimationInfo:(id)arg1 cacheData:(id)arg2 state:(id)arg3 ;
-(double)direction;
-(void)setTarget:(PDAnimationTarget *)arg1 ;
-(int)nodeType;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(PDBuild *)build;
-(BOOL)hasValue;
-(void)setDirection:(double)arg1 ;
-(NSString *)groupId;
-(void)setBuild:(PDBuild *)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setValue:(double)arg1 ;
-(BOOL)hasDelay;
-(double)delay;
-(int)level;
-(void)setGroupId:(NSString *)arg1 ;
-(BOOL)isHead;
-(void)setNodeType:(int)arg1 ;
-(void)setHasDelay:(BOOL)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(BOOL)hasDirection;
-(PDAnimationTarget *)target;
-(void)setLevel:(int)arg1 ;
-(double)duration;
-(double)value;
-(void)setHasDirection:(BOOL)arg1 ;
-(void)setPresetId:(int)arg1 ;
-(void)setPresetSubType:(int)arg1 ;
-(int)presetClass;
-(int)presetId;
-(int)presetSubType;
-(int)iterateType;
-(void)setIterateType:(int)arg1 ;
-(void)setPresetClass:(int)arg1 ;
-(PDAnimateMotionBehavior *)motionPath;
-(void)setMotionPath:(PDAnimateMotionBehavior *)arg1 ;
-(BOOL)hasPartCount;
-(int)partCount;
-(void)setPartCount:(int)arg1 ;
-(id)initWithAnimationInfo:(id)arg1 ;
-(void)setHasPartCount:(BOOL)arg1 ;
-(void)setIsHead:(BOOL)arg1 ;
@end

