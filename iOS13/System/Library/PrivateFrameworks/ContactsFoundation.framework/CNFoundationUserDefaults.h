/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)countryCode;
-(unsigned long long)shortNameFormat;
-(void)setShortNameFormat:(unsigned long long)arg1;
-(unsigned long long)sortOrder;
-(BOOL)isShortNameFormatEnabled;
-(void)setShortNameFormatEnabled:(BOOL)arg1;
-(unsigned long long)nameOrder;
-(void)setNameOrder:(unsigned long long)arg1;
-(unsigned long long)newContactNameOrder;
-(BOOL)preferNickname;
-(void)setPreferNickname:(BOOL)arg1;
-(NSDictionary *)filteredAccountsAndContainers;
-(void)setFilteredAccountsAndContainers:(id)arg1;

@end


@class NSDictionary, CNUserDefaults, NSString;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults> {

	CNUserDefaults* _userDefaults;

}

@property (retain) CNUserDefaults * userDefaults;                                                      //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@property (assign,nonatomic) NSDictionary * filteredAccountsAndContainers; 
+(id)sharedDefaults;
+(id)registeredDefaults;
+(id)makeRegisteredDefaults;
+(unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)arg1 ;
-(id)init;
-(id)countryCode;
-(unsigned long long)shortNameFormat;
-(void)setShortNameFormat:(unsigned long long)arg1 ;
-(CNUserDefaults *)userDefaults;
-(void)setUserDefaults:(CNUserDefaults *)arg1 ;
-(unsigned long long)sortOrder;
-(BOOL)isShortNameFormatEnabled;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(unsigned long long)nameOrder;
-(void)setNameOrder:(unsigned long long)arg1 ;
-(unsigned long long)newContactNameOrder;
-(BOOL)preferNickname;
-(void)setPreferNickname:(BOOL)arg1 ;
-(NSDictionary *)filteredAccountsAndContainers;
-(void)setFilteredAccountsAndContainers:(NSDictionary *)arg1 ;
@end

