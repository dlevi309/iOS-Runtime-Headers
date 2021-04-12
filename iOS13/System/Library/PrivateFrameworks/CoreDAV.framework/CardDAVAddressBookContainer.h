/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVContainer.h>

@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer {

	NSString* _maxResourceSize;
	NSString* _maxImageSize;
	NSURL* _meCardURL;
	BOOL _isGuardianRestricted;

}

@property (nonatomic,retain) NSString * maxResourceSize;              //@synthesize maxResourceSize=_maxResourceSize - In the implementation block
@property (nonatomic,retain) NSString * maxImageSize;                 //@synthesize maxImageSize=_maxImageSize - In the implementation block
@property (nonatomic,retain) NSURL * meCardURL;                       //@synthesize meCardURL=_meCardURL - In the implementation block
@property (assign,nonatomic) BOOL isGuardianRestricted;               //@synthesize isGuardianRestricted=_isGuardianRestricted - In the implementation block
@property (nonatomic,readonly) BOOL isAddressBook; 
@property (nonatomic,readonly) BOOL isSharedAddressBook; 
@property (nonatomic,readonly) BOOL isSearchAddressBook; 
+(id)copyPropertyMappingsForParser;
-(id)description;
-(BOOL)isGuardianRestricted;
-(void)setMaxImageSize:(NSString *)arg1 ;
-(NSString *)maxImageSize;
-(void)applyParsedProperties:(id)arg1 ;
-(NSString *)maxResourceSize;
-(void)setMaxResourceSize:(NSString *)arg1 ;
-(void)setMeCardURL:(NSURL *)arg1 ;
-(void)setIsGuardianRestricted:(BOOL)arg1 ;
-(BOOL)isAddressBook;
-(BOOL)isSearchAddressBook;
-(BOOL)isSharedAddressBook;
-(NSURL *)meCardURL;
@end

