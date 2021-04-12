/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@class CXHandoffContext, NSDate;

@interface CXPullCallAction : CXCallAction {

	CXHandoffContext* _handoffContext;
	NSDate* _dateConnected;

}

@property (nonatomic,copy) NSDate * dateConnected;                           //@synthesize dateConnected=_dateConnected - In the implementation block
@property (nonatomic,retain) CXHandoffContext * handoffContext;              //@synthesize handoffContext=_handoffContext - In the implementation block
+(BOOL)supportsSecureCoding;
+(double)timeout;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)fulfill;
-(id)customDescription;
-(NSDate *)dateConnected;
-(void)setDateConnected:(NSDate *)arg1 ;
-(CXHandoffContext *)handoffContext;
-(void)fulfillWithDateConnected:(id)arg1 ;
-(void)updateAsFulfilledWithDateConnected:(id)arg1 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)setHandoffContext:(CXHandoffContext *)arg1 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
@end

