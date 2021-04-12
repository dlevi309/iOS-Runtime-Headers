/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class HMSettings, HMSetting, NSSet, NSString;

@interface _HFObservedAccessorySettingState : NSObject <NAIdentifiable> {

	HMSettings* _settings;
	HMSetting* _setting;
	NSSet* _selectionOptions;

}

@property (nonatomic,readonly) HMSettings * settings;                      //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) HMSetting * setting;                        //@synthesize setting=_setting - In the implementation block
@property (nonatomic,copy,readonly) NSSet * selectionOptions;              //@synthesize selectionOptions=_selectionOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)stateWithSettings:(id)arg1 forSetting:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(HMSettings *)settings;
-(HMSetting *)setting;
-(id)initWithSettings:(id)arg1 setting:(id)arg2 ;
-(NSSet *)selectionOptions;
@end

