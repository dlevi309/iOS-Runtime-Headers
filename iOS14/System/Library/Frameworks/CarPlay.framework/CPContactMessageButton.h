/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPButton.h>

@class NSString;

@interface CPContactMessageButton : CPButton {

	NSString* _phoneOrEmail;

}

@property (nonatomic,copy,readonly) NSString * phoneOrEmail;              //@synthesize phoneOrEmail=_phoneOrEmail - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)phoneOrEmail;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPhoneOrEmail:(id)arg1 ;
@end

