/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)countryCode;
-(long long)shortNameFormat;
-(void)setShortNameFormat:(long long)arg1 ;
-(long long)sortOrder;
-(BOOL)shortNameFormatPrefersNicknames;
-(BOOL)isShortNameFormatEnabled;
-(id)changeNotificationName;
-(long long)displayNameOrder;
-(long long)newContactDisplayNameOrder;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(id)filteredGroupAndContainerIDs;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
@end

