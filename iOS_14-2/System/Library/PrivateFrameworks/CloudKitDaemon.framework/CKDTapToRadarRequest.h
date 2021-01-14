/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)uuid;
-(NSString *)relatedRadar;
-(void)setRelatedRadar:(NSString *)arg1 ;
-(NSString *)componentVersion;
-(void)setComponentID:(NSString *)arg1 ;
-(void)setComponentName:(NSString *)arg1 ;
-(void)setComponentVersion:(NSString *)arg1 ;
-(NSString *)componentID;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)componentName;
@end

