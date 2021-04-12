/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class PSUsageBundleApp, NSString;

@interface PSUsageBundleCategory : NSObject {

	PSUsageBundleApp* _usageBundleApp;
	NSString* _identifier;
	NSString* _name;

}

@property (assign,nonatomic,__weak) PSUsageBundleApp * usageBundleApp;              //@synthesize usageBundleApp=_usageBundleApp - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
+(id)categoryNamed:(id)arg1 withIdentifier:(id)arg2 forUsageBundleApp:(id)arg3 ;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(PSUsageBundleApp *)usageBundleApp;
-(void)setUsageBundleApp:(PSUsageBundleApp *)arg1 ;
@end

