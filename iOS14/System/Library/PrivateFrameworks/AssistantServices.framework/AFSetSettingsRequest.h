/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFSetSettingsRequest : AFSiriRequest {

	NSArray* _settings;
	BOOL _applyChanges;

}

@property (setter=_setSettings:,nonatomic,copy) NSArray * settings;                   //@synthesize settings=_settings - In the implementation block
@property (assign,setter=_setApplyChanges:,nonatomic) BOOL applyChanges;              //@synthesize applyChanges=_applyChanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)applyChanges;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(void)_setSettings:(id)arg1 ;
-(id)createResponseWithSettingChanges:(id)arg1 ;
-(void)_setApplyChanges:(BOOL)arg1 ;
-(NSArray *)settings;
-(id)initWithCoder:(id)arg1 ;
@end

