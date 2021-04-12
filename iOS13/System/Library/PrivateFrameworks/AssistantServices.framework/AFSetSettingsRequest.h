/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)settings;
-(id)createResponse;
-(id)createResponseWithSettingChanges:(id)arg1 ;
-(void)_setSettings:(id)arg1 ;
-(BOOL)applyChanges;
-(void)_setApplyChanges:(BOOL)arg1 ;
@end

