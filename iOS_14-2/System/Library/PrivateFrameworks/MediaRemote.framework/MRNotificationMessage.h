/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString, NSDictionary, MRPlayerPath;

@interface MRNotificationMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * notification; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) MRPlayerPath * playerPath; 
-(NSDictionary *)userInfo;
-(NSString *)notification;
-(MRPlayerPath *)playerPath;
-(unsigned long long)type;
-(id)initWithNotification:(id)arg1 ;
@end

