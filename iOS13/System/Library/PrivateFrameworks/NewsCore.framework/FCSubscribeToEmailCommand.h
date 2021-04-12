/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCSubscribeToEmailCommand : FCCommand {

	NSString* _DSID;
	NSString* _storeFrontID;
	NSString* _primaryLanguage;

}

@property (nonatomic,copy) NSString * DSID;                         //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * storeFrontID;                 //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (nonatomic,copy) NSString * primaryLanguage;              //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)primaryLanguage;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
-(void)setDSID:(NSString *)arg1 ;
-(NSString *)DSID;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(NSString *)storeFrontID;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(id)initWithDSID:(id)arg1 storeFrontID:(id)arg2 primaryLanguage:(id)arg3 ;
@end

