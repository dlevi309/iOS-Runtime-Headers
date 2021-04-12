/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PTRowAction.h>

@class NSString;

@interface PTRestoreDefaultSettingsRowAction : PTRowAction {

	NSString* _settingsKeyPath;

}

@property (nonatomic,readonly) NSString * settingsKeyPath;              //@synthesize settingsKeyPath=_settingsKeyPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)action;
+(id)actionWithSettingsKeyPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(/*^block*/id)defaultHandler;
-(NSString *)settingsKeyPath;
@end

