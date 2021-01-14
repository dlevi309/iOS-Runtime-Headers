/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <ShazamKit/SHStore.h>

@class NSString;

@interface SHRemoteStore : SHStore {

	NSString* _partnerName;
	NSString* _installationID;

}

@property (nonatomic,copy,readonly) NSString * partnerName;                 //@synthesize partnerName=_partnerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * installationID;              //@synthesize installationID=_installationID - In the implementation block
+(id)new;
+(BOOL)validatePartnerName:(id)arg1 ;
+(BOOL)validateInstallationID:(id)arg1 ;
-(id)init;
-(NSString *)partnerName;
-(id)createMatcher;
-(NSString *)installationID;
-(id)initWithPartnerName:(id)arg1 ;
-(id)initWithPartnerName:(id)arg1 installationID:(id)arg2 ;
@end

