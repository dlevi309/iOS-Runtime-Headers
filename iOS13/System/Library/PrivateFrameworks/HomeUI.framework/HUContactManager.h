/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSDictionary, CNContactStore, CNMonogrammer;

@interface HUContactManager : NSObject {

	NSDictionary* _cachedContactByEmails;
	CNContactStore* _contactStore;
	CNMonogrammer* _monogrammer;
	double _monogramDiameter;

}

@property (nonatomic,copy) NSDictionary * cachedContactByEmails;              //@synthesize cachedContactByEmails=_cachedContactByEmails - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                 //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNMonogrammer * monogrammer;                     //@synthesize monogrammer=_monogrammer - In the implementation block
@property (assign,nonatomic) double monogramDiameter;                         //@synthesize monogramDiameter=_monogramDiameter - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(CNContactStore *)contactStore;
-(void)contactStoreDidChange:(id)arg1 ;
-(CNMonogrammer *)monogrammer;
-(void)setMonogrammer:(CNMonogrammer *)arg1 ;
-(double)monogramDiameter;
-(void)setMonogramDiameter:(double)arg1 ;
-(void)setCachedContactByEmails:(NSDictionary *)arg1 ;
-(NSDictionary *)cachedContactByEmails;
-(id)contactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 ;
-(id)userDataFromEmail:(id)arg1 monogramDiameter:(double)arg2 ;
@end

