/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSettings:(EDAMBootstrapSettings *)arg1 ;
-(NSString *)name;
-(EDAMBootstrapSettings *)settings;
-(void)setName:(NSString *)arg1 ;
@end

