/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface STUIAskForTimeRequestResponse : NSObject <NSCopying> {

	unsigned long long _usageType;
	NSString* _identifier;
	NSString* _budgetedIdentifier;
	NSNumber* _requestingUserDSID;

}

@property (assign,nonatomic) unsigned long long usageType;               //@synthesize usageType=_usageType - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * budgetedIdentifier;                //@synthesize budgetedIdentifier=_budgetedIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * requestingUserDSID;              //@synthesize requestingUserDSID=_requestingUserDSID - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(unsigned long long)usageType;
-(NSNumber *)requestingUserDSID;
-(void)setRequestingUserDSID:(NSNumber *)arg1 ;
-(void)setUsageType:(unsigned long long)arg1 ;
-(NSString *)budgetedIdentifier;
-(id)initWithRequestResponse:(id)arg1 ;
-(void)setBudgetedIdentifier:(NSString *)arg1 ;
@end

