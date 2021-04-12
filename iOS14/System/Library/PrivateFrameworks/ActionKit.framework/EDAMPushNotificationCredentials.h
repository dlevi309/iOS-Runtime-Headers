/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSData, NSString;

@interface EDAMPushNotificationCredentials : FATObject {

	NSData* _iosDeviceToken;
	NSString* _gcmRegistrationId;

}

@property (nonatomic,retain) NSData * iosDeviceToken;                   //@synthesize iosDeviceToken=_iosDeviceToken - In the implementation block
@property (nonatomic,retain) NSString * gcmRegistrationId;              //@synthesize gcmRegistrationId=_gcmRegistrationId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSData *)iosDeviceToken;
-(void)setIosDeviceToken:(NSData *)arg1 ;
-(NSString *)gcmRegistrationId;
-(void)setGcmRegistrationId:(NSString *)arg1 ;
@end

