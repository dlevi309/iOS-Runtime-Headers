/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSString;

@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon {

	long long _type;
	NSString* _systemImageName;

}

@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * systemImageName;              //@synthesize systemImageName=_systemImageName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithSystemImageName:(id)arg1 ;
-(id)_initForSubclass;
-(NSString *)systemImageName;
@end

