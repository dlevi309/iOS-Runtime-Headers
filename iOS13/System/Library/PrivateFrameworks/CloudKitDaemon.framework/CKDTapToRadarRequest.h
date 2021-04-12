/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString;

@interface CKDTapToRadarRequest : NSObject {

	NSString* _message;
	NSString* _uuid;
	NSString* _componentName;
	NSString* _componentVersion;
	NSString* _componentID;
	NSString* _relatedRadar;

}

@property (nonatomic,retain) NSString * message;                       //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * componentName;                 //@synthesize componentName=_componentName - In the implementation block
@property (nonatomic,retain) NSString * componentVersion;              //@synthesize componentVersion=_componentVersion - In the implementation block
@property (nonatomic,retain) NSString * componentID;                   //@synthesize componentID=_componentID - In the implementation block
@property (nonatomic,retain) NSString * relatedRadar;                  //@synthesize relatedRadar=_relatedRadar - In the implementation block
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)componentName;
-(NSString *)componentVersion;
-(NSString *)componentID;
-(void)setComponentID:(NSString *)arg1 ;
-(void)setComponentName:(NSString *)arg1 ;
-(void)setComponentVersion:(NSString *)arg1 ;
-(void)setRelatedRadar:(NSString *)arg1 ;
-(NSString *)relatedRadar;
@end

