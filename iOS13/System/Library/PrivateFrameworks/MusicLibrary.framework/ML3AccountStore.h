/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/ML3AccountInformationProviding.h>

@class NSString, ACAccount;

@interface ML3AccountStore : NSObject <ML3AccountInformationProviding>

@property (nonatomic,readonly) ACAccount * activeAccount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * accountDSID; 
+(id)defaultStore;
-(id)_init;
-(ACAccount *)activeAccount;
-(NSString *)accountDSID;
-(id)_accountsWithAccountTypeIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)altDSIDForAccountWithDSID:(long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
@end

