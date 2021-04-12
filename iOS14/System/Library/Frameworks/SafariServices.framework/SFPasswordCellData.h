/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class WBSSavedPassword, WBSPasswordWarning, NSString;

@interface SFPasswordCellData : NSObject {

	BOOL _savedPasswordIsOnlySavedPasswordForHighLevelDomain;
	WBSSavedPassword* _savedPassword;
	WBSPasswordWarning* _warning;

}

@property (nonatomic,readonly) WBSSavedPassword * savedPassword;                                     //@synthesize savedPassword=_savedPassword - In the implementation block
@property (nonatomic,readonly) WBSPasswordWarning * warning;                                         //@synthesize warning=_warning - In the implementation block
@property (nonatomic,copy,readonly) NSString * highLevelDomain; 
@property (nonatomic,readonly) BOOL savedPasswordIsOnlySavedPasswordForHighLevelDomain;              //@synthesize savedPasswordIsOnlySavedPasswordForHighLevelDomain=_savedPasswordIsOnlySavedPasswordForHighLevelDomain - In the implementation block
+(id)passwordCellDataWithSavedPassword:(id)arg1 warning:(id)arg2 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)arg3 ;
-(id)initWithSavedPassword:(id)arg1 warning:(id)arg2 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)arg3 ;
-(WBSSavedPassword *)savedPassword;
-(BOOL)savedPasswordIsOnlySavedPasswordForHighLevelDomain;
-(WBSPasswordWarning *)warning;
-(NSString *)highLevelDomain;
@end

