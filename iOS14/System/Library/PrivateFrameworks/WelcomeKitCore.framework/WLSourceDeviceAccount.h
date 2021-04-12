/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)sqlID;
-(id)initWithInfo:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setSqlID:(unsigned long long)arg1 ;
@end

