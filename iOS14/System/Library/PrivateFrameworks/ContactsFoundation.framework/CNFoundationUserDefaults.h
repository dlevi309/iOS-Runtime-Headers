/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNFoundationUserDefaults.h>
@class NSDictionary;


@protocol CNFoundationUserDefaults <NSObject>
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@property (assign,nonatomic) NSDictionary * filteredAccountsAndContainers; 
@required
-(unsigned long long)sortOrder;
-(id)countryCode;
-(void)setShortNameFormat:(unsigned long long)arg1;
-(BOOL)isShortNameFormatEnabled;
-(unsigned long long)shortNameFormat;
-(unsigned long long)nameOrder;
-(void)setShortNameFormatEnabled:(BOOL)arg1;
-(void)setNameOrder:(unsigned long long)arg1;
-(BOOL)preferNickname;
-(unsigned long long)newContactNameOrder;
-(void)setPreferNickname:(BOOL)arg1;
-(NSDictionary *)filteredAccountsAndContainers;
-(void)setFilteredAccountsAndContainers:(id)arg1;

@end


@class NSDictionary, CNUserDefaults, NSString;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults> {

	CNUserDefaults* _userDefaults;

}

@property (retain) CNUserDefaults * userDefaults;                                                      //@synthesize userDefaults=_userDefaults - In the implementation block
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@property (assign,nonatomic) NSDictionary * filteredAccountsAndContainers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)registeredDefaults;
+(id)sharedDefaults;
+(id)makeRegisteredDefaults;
+(unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)arg1 ;
-(unsigned long long)sortOrder;
-(void)setUserDefaults:(CNUserDefaults *)arg1 ;
-(id)countryCode;
-(void)setShortNameFormat:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isShortNameFormatEnabled;
-(unsigned long long)shortNameFormat;
-(CNUserDefaults *)userDefaults;
-(unsigned long long)nameOrder;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(void)setNameOrder:(unsigned long long)arg1 ;
-(BOOL)preferNickname;
-(unsigned long long)newContactNameOrder;
-(void)setPreferNickname:(BOOL)arg1 ;
-(NSDictionary *)filteredAccountsAndContainers;
-(void)setFilteredAccountsAndContainers:(NSDictionary *)arg1 ;
@end

