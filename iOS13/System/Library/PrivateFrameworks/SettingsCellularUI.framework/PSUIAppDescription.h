/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)persistentID;
-(void)setPersistentID:(NSString *)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)publisher;
-(void)setPublisher:(NSString *)arg1 ;
@end

