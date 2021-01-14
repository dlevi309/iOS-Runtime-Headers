/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSpeed:(int)arg1 ;
-(void)setDuration:(NSNumber *)arg1 ;
-(id)init;
-(int)speed;
-(BOOL)hasType;
-(id)options;
-(void)setType:(int)arg1 ;
-(void)setOptions:(id)arg1 ;
-(id)description;
-(BOOL)hasSpeed;
-(int)type;
-(NSNumber *)duration;
-(void)setIsAdvanceOnClick:(BOOL)arg1 ;
-(void)setAdvanceAfterTime:(int)arg1 ;
-(BOOL)hasTransitionOptions;
-(BOOL)hasIsAdvanceOnClick;
-(BOOL)hasAdvanceAfterTime;
-(BOOL)isAdvanceOnClick;
-(int)advanceAfterTime;
@end

