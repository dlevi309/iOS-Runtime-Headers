/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@class NSArray, NSDictionary, CNContactStore;

@interface GKContactDataSource : NSObject {

	NSArray* _contacts;
	NSArray* _sectionHeaders;
	NSDictionary* _sectionToContactIndexes;
	NSArray* _skipValues;
	NSDictionary* _skipToContactIndexes;
	CNContactStore* _store;
	NSDictionary* _contactLookup;

}

@property (nonatomic,retain) CNContactStore * store;                              //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                  //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) NSDictionary * contactLookup;                        //@synthesize contactLookup=_contactLookup - In the implementation block
@property (nonatomic,retain) NSArray * sectionHeaders;                            //@synthesize sectionHeaders=_sectionHeaders - In the implementation block
@property (nonatomic,retain) NSDictionary * sectionToContactIndexes;              //@synthesize sectionToContactIndexes=_sectionToContactIndexes - In the implementation block
@property (nonatomic,retain) NSArray * skipValues;                                //@synthesize skipValues=_skipValues - In the implementation block
@property (nonatomic,retain) NSDictionary * skipToContactIndexes;                 //@synthesize skipToContactIndexes=_skipToContactIndexes - In the implementation block
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(void)setStore:(CNContactStore *)arg1 ;
-(id)init;
-(CNContactStore *)store;
-(void)setSectionHeaders:(NSArray *)arg1 ;
-(NSArray *)sectionHeaders;
-(void)setSkipValues:(NSArray *)arg1 ;
-(void)setContactLookup:(NSDictionary *)arg1 ;
-(void)setSectionToContactIndexes:(NSDictionary *)arg1 ;
-(void)setSkipToContactIndexes:(NSDictionary *)arg1 ;
-(NSDictionary *)contactLookup;
-(void)loadContactsWithHandler:(/*^block*/id)arg1 ;
-(id)fullContactWithIdentifier:(id)arg1 ;
-(NSDictionary *)sectionToContactIndexes;
-(NSArray *)skipValues;
-(NSDictionary *)skipToContactIndexes;
@end

