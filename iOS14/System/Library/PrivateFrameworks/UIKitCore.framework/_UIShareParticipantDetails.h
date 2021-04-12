/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIColor;

@interface _UIShareParticipantDetails : NSObject <NSSecureCoding> {

	NSString* _participantID;
	NSString* _detailText;
	UIColor* _participantColor;

}

@property (copy) NSString * participantID;                //@synthesize participantID=_participantID - In the implementation block
@property (copy) NSString * detailText;                   //@synthesize detailText=_detailText - In the implementation block
@property (copy) UIColor * participantColor;              //@synthesize participantColor=_participantColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(UIColor *)participantColor;
-(void)setParticipantColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)detailText;
@end

