/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingResponse.h>

@class SASettingAudioRoute;

@interface SASettingGetAudioRouteResponse : SASettingResponse

@property (nonatomic,retain) SASettingAudioRoute * audioRoute; 
+(id)getAudioRouteResponse;
+(id)getAudioRouteResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASettingAudioRoute *)audioRoute;
-(void)setAudioRoute:(SASettingAudioRoute *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

