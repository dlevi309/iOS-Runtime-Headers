/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@class NSString;

@interface WLSourceDeviceAccount : NSObject {

	unsigned long long _sqlID;
	NSString* _identifier;

}

@property (assign,nonatomic) unsigned long long sqlID;              //@synthesize sqlID=_sqlID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
+(BOOL)accountInfoArrayContainsNonSyncableAccount:(id)arg1 ;
+(BOOL)accountInfoRepresentsSyncableAccount:(id)arg1 ;
+(id)accountWithInfo:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(unsigned long long)sqlID;
-(void)setSqlID:(unsigned long long)arg1 ;
@end

