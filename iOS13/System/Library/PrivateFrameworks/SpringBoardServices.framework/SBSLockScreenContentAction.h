/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <BaseBoard/BSAction.h>

@class NSString;

@interface SBSLockScreenContentAction : BSAction {

	unsigned long long _type;
	NSString* _slot;
	unsigned long long _secureAppType;
	id _configurationObject;

}

@property (assign,nonatomic) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * slot;                               //@synthesize slot=_slot - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (assign,nonatomic) unsigned long long secureAppType;              //@synthesize secureAppType=_secureAppType - In the implementation block
@property (nonatomic,retain) id configurationObject;                        //@synthesize configurationObject=_configurationObject - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(NSString *)slot;
-(void)setSlot:(NSString *)arg1 ;
-(void)setConfigurationObject:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 configurationObject:(id)arg4 handler:(/*^block*/id)arg5 ;
-(id)configurationObject;
-(unsigned long long)secureAppType;
-(void)setSecureAppType:(unsigned long long)arg1 ;
@end

