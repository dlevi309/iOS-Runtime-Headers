/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@class NSString, UIImage;

@interface PSUIAppDescription : NSObject {

	NSString* _name;
	NSString* _publisher;
	NSString* _bundleID;
	NSString* _persistentID;
	UIImage* _icon;

}

@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * publisher;                 //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,retain) UIImage * icon;                     //@synthesize icon=_icon - In the implementation block
-(void)setPublisher:(NSString *)arg1 ;
-(NSString *)publisher;
-(void)setPersistentID:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)name;
-(id)description;
-(NSString *)persistentID;
-(NSString *)bundleID;
-(void)setName:(NSString *)arg1 ;
@end

