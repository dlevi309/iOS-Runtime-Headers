/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/ML3AccountInformationProviding.h>

@class NSString, ACAccount;

@interface ML3AccountStore : NSObject <ML3AccountInformationProviding>

@property (nonatomic,readonly) ACAccount * activeAccount; 
@property (nonatomic,copy,readonly) NSString * accountDSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultStore;
-(ACAccount *)activeAccount;
-(id)_init;
-(NSString *)accountDSID;
-(id)_accountsWithAccountTypeIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)altDSIDForAccountWithDSID:(long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
@end

