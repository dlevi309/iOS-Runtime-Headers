/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADProperties.h>

@class PDTransitionOptions, NSNumber;

@interface PDTransition : OADProperties {

	BOOL mHasType;
	int mType;
	BOOL mHasSpeed;
	int mSpeed;
	BOOL mHasAdvanceOnClick;
	BOOL mIsAdvanceOnClick;
	BOOL mHasAdvanceAfterTime;
	int mAdvanceAfterTime;
	PDTransitionOptions* mOptions;
	NSNumber* duration;

}

@property (nonatomic,retain) NSNumber * duration; 
-(id)init;
-(id)description;
-(id)options;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setOptions:(id)arg1 ;
-(NSNumber *)duration;
-(void)setDuration:(NSNumber *)arg1 ;
-(int)speed;
-(void)setSpeed:(int)arg1 ;
-(BOOL)hasType;
-(BOOL)hasSpeed;
-(void)setIsAdvanceOnClick:(BOOL)arg1 ;
-(void)setAdvanceAfterTime:(int)arg1 ;
-(BOOL)hasTransitionOptions;
-(BOOL)hasIsAdvanceOnClick;
-(BOOL)hasAdvanceAfterTime;
-(BOOL)isAdvanceOnClick;
-(int)advanceAfterTime;
@end

