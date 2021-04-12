/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithType:(long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithSystemImageName:(id)arg1 ;
-(id)_initForSubclass;
-(NSString *)systemImageName;
-(BOOL)isEqual:(id)arg1 ;
@end

