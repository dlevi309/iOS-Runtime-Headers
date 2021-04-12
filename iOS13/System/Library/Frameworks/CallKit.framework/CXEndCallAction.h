/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@class NSDate;

@interface CXEndCallAction : CXCallAction {

	NSDate* _dateEnded;

}

@property (nonatomic,copy) NSDate * dateEnded;              //@synthesize dateEnded=_dateEnded - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)fulfill;
-(id)customDescription;
-(NSDate *)dateEnded;
-(void)setDateEnded:(NSDate *)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)fulfillWithDateEnded:(id)arg1 ;
-(void)updateAsFulfilledWithDateEnded:(id)arg1 ;
@end

