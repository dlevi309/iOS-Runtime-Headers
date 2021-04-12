/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, EDAMBootstrapSettings;

@interface EDAMBootstrapProfile : FATObject {

	NSString* _name;
	EDAMBootstrapSettings* _settings;

}

@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) EDAMBootstrapSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(EDAMBootstrapSettings *)settings;
-(void)setSettings:(EDAMBootstrapSettings *)arg1 ;
@end

