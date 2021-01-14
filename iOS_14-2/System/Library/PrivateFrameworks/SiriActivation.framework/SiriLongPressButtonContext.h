/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriContext.h>

@interface SiriLongPressButtonContext : SiriContext {

	double _buttonDownTimestamp;

}

@property (assign,nonatomic) double buttonDownTimestamp;              //@synthesize buttonDownTimestamp=_buttonDownTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(double)buttonDownTimestamp;
-(void)setButtonDownTimestamp:(double)arg1 ;
@end

