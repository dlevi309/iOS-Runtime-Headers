/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSSet, NSUUID, NSArray;

@interface CSUserAction : NSObject <CSCoderEncoder, NSSecureCoding> {

	NSString* _itemIdentifier;
	NSString* _contentAction;
	NSDictionary* _userInfo;
	NSSet* _keywords;
	unsigned long long _eligibility;
	NSUUID* _uaIdentifier;
	NSArray* _madeInitiallyCurrentDates;
	NSArray* _madeCurrentDates;
	NSArray* _madeCurrentEndDates;
	NSArray* _sentToIndexerDates;
	double _madeCurrentInterval;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpc_dictionary; 
@property (copy) NSString * itemIdentifier;                                          //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (copy) NSString * contentAction;                                           //@synthesize contentAction=_contentAction - In the implementation block
@property (retain) NSDictionary * userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) NSSet * keywords;                                                 //@synthesize keywords=_keywords - In the implementation block
@property (assign) unsigned long long eligibility;                                   //@synthesize eligibility=_eligibility - In the implementation block
@property (nonatomic,retain) NSUUID * uaIdentifier;                                  //@synthesize uaIdentifier=_uaIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * madeInitiallyCurrentDates;                      //@synthesize madeInitiallyCurrentDates=_madeInitiallyCurrentDates - In the implementation block
@property (nonatomic,copy) NSArray * madeCurrentDates;                               //@synthesize madeCurrentDates=_madeCurrentDates - In the implementation block
@property (nonatomic,copy) NSArray * madeCurrentEndDates;                            //@synthesize madeCurrentEndDates=_madeCurrentEndDates - In the implementation block
@property (nonatomic,copy) NSArray * sentToIndexerDates;                             //@synthesize sentToIndexerDates=_sentToIndexerDates - In the implementation block
@property (assign,nonatomic) double madeCurrentInterval;                             //@synthesize madeCurrentInterval=_madeCurrentInterval - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionFromUserActivity:(id)arg1 searchableItem:(id)arg2 ;
-(NSObject*<OS_xpc_object>)xpc_dictionary;
-(unsigned long long)eligibility;
-(double)madeCurrentInterval;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)itemIdentifier;
-(void)setContentAction:(NSString *)arg1 ;
-(id)initWithXPCDict:(id)arg1 ;
-(void)setKeywords:(NSSet *)arg1 ;
-(NSDictionary *)userInfo;
-(NSArray *)sentToIndexerDates;
-(id)_propertiesDescription;
-(void)setEligibility:(unsigned long long)arg1 ;
-(void)setUaIdentifier:(NSUUID *)arg1 ;
-(NSSet *)keywords;
-(void)setSentToIndexerDates:(NSArray *)arg1 ;
-(void)setMadeInitiallyCurrentDates:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSArray *)madeCurrentEndDates;
-(void)encodeWithCSCoder:(id)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSString *)contentAction;
-(id)description;
-(void)setMadeCurrentInterval:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setMadeCurrentDates:(NSArray *)arg1 ;
-(NSArray *)madeInitiallyCurrentDates;
-(id)initWithUserActivity:(id)arg1 searchableItem:(id)arg2 ;
-(void)setMadeCurrentEndDates:(NSArray *)arg1 ;
-(void)updateWithUserAction:(id)arg1 ;
-(NSUUID *)uaIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)madeCurrentDates;
@end

