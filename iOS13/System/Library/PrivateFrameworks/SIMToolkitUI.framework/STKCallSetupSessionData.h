/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)isHighPriority;
-(id)initWithText:(id)arg1 phoneNumber:(id)arg2 ;
@end

