/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


@class NSString, BlastDoorImage, NSUUID, NSURL, BlastDoorMessagesAppBalloon_Layout;

@interface BlastDoorMessagesAppBalloon : NSObject {


}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSString * ldtext; 
@property (readonly,nonatomic) NSString * accessibilityLabel; 
@property (readonly,nonatomic) NSString * appName; 
@property (readonly,nonatomic) BlastDoorImage * appIcon; 
@property (readonly,nonatomic) NSUUID * sessionIdentifier; 
@property (readonly,nonatomic) NSString * layoutClass; 
@property (readonly,nonatomic) NSURL * url; 
@property (readonly,nonatomic) long long appId; 
@property (readonly,nonatomic) BlastDoorMessagesAppBalloon_Layout * layout; 
-(long long)appId;
-(NSString *)accessibilityLabel;
-(id)init;
-(NSString *)layoutClass;
-(NSURL *)url;
-(NSUUID *)sessionIdentifier;
-(NSString *)description;
-(NSString *)ldtext;
-(NSString *)appName;
-(BlastDoorImage *)appIcon;
-(BlastDoorMessagesAppBalloon_Layout *)layout;
@end

