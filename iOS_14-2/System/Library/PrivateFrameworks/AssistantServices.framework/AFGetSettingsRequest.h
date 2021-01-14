/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFGetSettingsRequest : AFSiriRequest {

	NSArray* _settings;

}

@property (nonatomic,copy) NSArray * settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(void)setSettings:(NSArray *)arg1 ;
-(NSArray *)settings;
-(id)initWithCoder:(id)arg1 ;
@end

