/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SASettingAudioRoute : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * audioRouteType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioRouteWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)audioRoute;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)audioRouteType;
-(void)setAudioRouteType:(NSString *)arg1 ;
@end

