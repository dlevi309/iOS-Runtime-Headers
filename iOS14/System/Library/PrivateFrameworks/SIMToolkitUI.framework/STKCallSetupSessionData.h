/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/STKTextSessionData.h>

@class NSString;

@interface STKCallSetupSessionData : STKTextSessionData {

	NSString* _phoneNumber;
	BOOL _isHighPriority;

}

@property (nonatomic,copy,readonly) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) BOOL isHighPriority;                      //@synthesize isHighPriority=_isHighPriority - In the implementation block
-(NSString *)phoneNumber;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)isHighPriority;
-(id)initWithText:(id)arg1 simLabel:(id)arg2 phoneNumber:(id)arg3 ;
@end

