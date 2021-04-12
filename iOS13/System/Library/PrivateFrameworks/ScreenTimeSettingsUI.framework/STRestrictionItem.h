/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface STRestrictionItem : NSObject <NSCopying> {

	NSString* _rmConfiguration;
	NSString* _payloadKey;
	NSString* _uiLabel;
	unsigned long long _restrictionType;
	id _otherInfo;

}

@property (nonatomic,copy,readonly) NSString * rmConfiguration;                 //@synthesize rmConfiguration=_rmConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSString * payloadKey;                      //@synthesize payloadKey=_payloadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * uiLabel;                         //@synthesize uiLabel=_uiLabel - In the implementation block
@property (nonatomic,readonly) unsigned long long restrictionType;              //@synthesize restrictionType=_restrictionType - In the implementation block
@property (nonatomic,copy,readonly) id otherInfo;                               //@synthesize otherInfo=_otherInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)restrictionType;
-(NSString *)uiLabel;
-(NSString *)rmConfiguration;
-(NSString *)payloadKey;
-(id)initWithConfiguration:(id)arg1 restrictionKey:(id)arg2 labelName:(id)arg3 type:(unsigned long long)arg4 restrictionValue:(id)arg5 ;
-(id)otherInfo;
@end

