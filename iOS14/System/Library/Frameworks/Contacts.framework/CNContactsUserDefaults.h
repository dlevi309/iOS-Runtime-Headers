/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSString;

@interface CNContactsUserDefaults : NSObject

@property (assign,nonatomic) long long displayNameOrder; 
@property (assign,nonatomic) long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@property (assign,nonatomic) BOOL shortNameFormatPrefersNicknames; 
@property (nonatomic,readonly) long long sortOrder; 
@property (nonatomic,copy,readonly) NSString * countryCode; 
+(id)sharedDefaults;
+(void)flushSharedInstance;
-(long long)sortOrder;
-(long long)newContactDisplayNameOrder;
-(NSString *)countryCode;
-(void)setShortNameFormat:(long long)arg1 ;
-(id)init;
-(BOOL)isShortNameFormatEnabled;
-(long long)shortNameFormat;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(BOOL)shortNameFormatPrefersNicknames;
-(id)filteredGroupAndContainerIDs;
-(id)changeNotificationName;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(long long)displayNameOrder;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
@end

