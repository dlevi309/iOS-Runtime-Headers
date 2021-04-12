/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSSet, NSUUID;

@interface CSUserAction : NSObject <CSCoderEncoder, NSSecureCoding> {

	NSString* _itemIdentifier;
	NSString* _contentAction;
	NSDictionary* _userInfo;
	NSSet* _keywords;
	unsigned long long _eligibility;
	NSUUID* _uaIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpc_dictionary; 
@property (copy) NSString * itemIdentifier;                                          //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (copy) NSString * contentAction;                                           //@synthesize contentAction=_contentAction - In the implementation block
@property (retain) NSDictionary * userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) NSSet * keywords;                                                 //@synthesize keywords=_keywords - In the implementation block
@property (assign) unsigned long long eligibility;                                   //@synthesize eligibility=_eligibility - In the implementation block
@property (nonatomic,retain) NSUUID * uaIdentifier;                                  //@synthesize uaIdentifier=_uaIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionFromUserActivity:(id)arg1 searchableItem:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSSet *)keywords;
-(void)setKeywords:(NSSet *)arg1 ;
-(NSUUID *)uaIdentifier;
-(unsigned long long)eligibility;
-(id)initWithXPCDict:(id)arg1 ;
-(id)_propertiesDescription;
-(void)encodeWithCSCoder:(id)arg1 ;
-(void)setContentAction:(NSString *)arg1 ;
-(void)setEligibility:(unsigned long long)arg1 ;
-(void)setUaIdentifier:(NSUUID *)arg1 ;
-(NSString *)contentAction;
-(NSObject*<OS_xpc_object>)xpc_dictionary;
@end

