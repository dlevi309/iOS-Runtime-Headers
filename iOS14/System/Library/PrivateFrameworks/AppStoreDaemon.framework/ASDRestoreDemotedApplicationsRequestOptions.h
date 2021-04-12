/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSNumber, NSString, NSArray;

@interface ASDRestoreDemotedApplicationsRequestOptions : ASDRequestOptions {

	NSNumber* _accountID;
	NSString* _appleID;
	NSArray* _bundleIDs;

}

@property (nonatomic,readonly) NSNumber * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * appleID;                //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSArray * bundleIDs;                   //@synthesize bundleIDs=_bundleIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)accountID;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 appleID:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appleID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBundleIDs:(id)arg1 ;
@end

