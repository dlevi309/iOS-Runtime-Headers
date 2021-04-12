/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@class NSDate;

@interface CXAnswerCallAction : CXCallAction {

	BOOL _downgradeToAudio;
	NSDate* _dateConnected;
	CGSize _localPortraitAspectRatio;
	CGSize _localLandscapeAspectRatio;

}

@property (nonatomic,copy) NSDate * dateConnected;               //@synthesize dateConnected=_dateConnected - In the implementation block
@property (assign,nonatomic) BOOL downgradeToAudio;              //@synthesize downgradeToAudio=_downgradeToAudio - In the implementation block
+(BOOL)supportsSecureCoding;
+(double)timeout;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)fulfill;
-(id)customDescription;
-(NSDate *)dateConnected;
-(BOOL)downgradeToAudio;
-(CGSize)localLandscapeAspectRatio;
-(CGSize)localPortraitAspectRatio;
-(void)setLocalLandscapeAspectRatio:(CGSize)arg1 ;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(void)setDowngradeToAudio:(BOOL)arg1 ;
-(void)setDateConnected:(NSDate *)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)fulfillWithDateConnected:(id)arg1 ;
-(void)updateAsFulfilledWithDateConnected:(id)arg1 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
@end

