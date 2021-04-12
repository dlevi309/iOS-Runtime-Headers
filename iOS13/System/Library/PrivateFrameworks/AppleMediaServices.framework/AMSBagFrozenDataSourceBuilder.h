/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSBagKeySet, NSArray, NSDictionary, NSDate, NSString;

@interface AMSBagFrozenDataSourceBuilder : NSObject {

	AMSBagKeySet* _bagKeySet;
	NSArray* _cookies;
	NSDictionary* _data;
	NSDate* _expirationDate;
	NSString* _profile;
	NSString* _profileVersion;

}

@property (nonatomic,retain) AMSBagKeySet * bagKeySet;               //@synthesize bagKeySet=_bagKeySet - In the implementation block
@property (nonatomic,retain) NSArray * cookies;                      //@synthesize cookies=_cookies - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSString * profile;                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;              //@synthesize profileVersion=_profileVersion - In the implementation block
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)profile;
-(void)setProfile:(NSString *)arg1 ;
-(NSArray *)cookies;
-(AMSBagKeySet *)bagKeySet;
-(NSString *)profileVersion;
-(void)setBagKeySet:(AMSBagKeySet *)arg1 ;
-(void)setCookies:(NSArray *)arg1 ;
-(void)setProfileVersion:(NSString *)arg1 ;
-(id)createFrozenDataSource;
-(id)initWithFrozenDataSource:(id)arg1 ;
@end

