/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)restrictionType;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)uiLabel;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)rmConfiguration;
-(NSString *)payloadKey;
-(id)initWithConfiguration:(id)arg1 restrictionKey:(id)arg2 labelName:(id)arg3 type:(unsigned long long)arg4 restrictionValue:(id)arg5 ;
-(id)otherInfo;
@end

