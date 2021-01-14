/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)contactStoreDidChange:(id)arg1 ;
-(CNContactStore *)contactStore;
-(void)setMonogramDiameter:(double)arg1 ;
-(id)init;
-(CNMonogrammer *)monogrammer;
-(void)setMonogrammer:(CNMonogrammer *)arg1 ;
-(void)dealloc;
-(double)monogramDiameter;
-(void)setCachedContactByEmails:(NSDictionary *)arg1 ;
-(NSDictionary *)cachedContactByEmails;
-(id)contactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 ;
-(id)userDataFromEmail:(id)arg1 monogramDiameter:(double)arg2 ;
@end

