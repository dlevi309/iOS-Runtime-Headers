/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PTRowAction.h>

@class NSString;

@interface PTRestoreDefaultSettingsRowAction : PTRowAction {

	NSString* _settingsKeyPath;

}

@property (nonatomic,readonly) NSString * settingsKeyPath;              //@synthesize settingsKeyPath=_settingsKeyPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionWithSettingsKeyPath:(id)arg1 ;
+(id)action;
-(/*^block*/id)defaultHandler;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)settingsKeyPath;
@end

