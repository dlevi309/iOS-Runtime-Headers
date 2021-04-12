/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/STKTextSessionData.h>

@class NSString;

@interface STKTextInputSessionData : STKTextSessionData {

	NSString* _defaultText;
	BOOL _isSecure;
	BOOL _isDigitsOnly;
	unsigned long long _minimumInputLength;
	unsigned long long _maximumInputLength;

}

@property (nonatomic,copy,readonly) NSString * defaultText;                        //@synthesize defaultText=_defaultText - In the implementation block
@property (nonatomic,readonly) BOOL isSecure;                                      //@synthesize isSecure=_isSecure - In the implementation block
@property (nonatomic,readonly) BOOL isDigitsOnly;                                  //@synthesize isDigitsOnly=_isDigitsOnly - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumInputLength;              //@synthesize minimumInputLength=_minimumInputLength - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumInputLength;              //@synthesize maximumInputLength=_maximumInputLength - In the implementation block
-(BOOL)isSecure;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)defaultText;
-(id)initWithText:(id)arg1 simLabel:(id)arg2 ;
-(BOOL)isDigitsOnly;
-(unsigned long long)minimumInputLength;
-(unsigned long long)maximumInputLength;
@end

