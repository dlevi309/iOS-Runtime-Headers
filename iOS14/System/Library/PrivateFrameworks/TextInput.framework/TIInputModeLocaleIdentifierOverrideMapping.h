/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSDictionary;

@interface TIInputModeLocaleIdentifierOverrideMapping : NSObject {

	NSDictionary* _overrideMapping;

}

@property (nonatomic,readonly) NSDictionary * overrideMapping;              //@synthesize overrideMapping=_overrideMapping - In the implementation block
+(id)sharedInstance;
-(NSDictionary *)overrideMapping;
-(id)overrideLocaleForIdentifier:(id)arg1 ;
-(unsigned char)localeIdentifierHasOverride:(id)arg1 ;
@end

