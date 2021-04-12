/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class NSString;

@interface SLFacebookFriendList : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSString* _type;

}

@property (retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (retain) NSString * type;                    //@synthesize type=_type - In the implementation block
+(id)friendListWithDictionary:(id)arg1 ;
+(id)friendListsWithResponseData:(id)arg1 ;
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithFriendListDictionary:(id)arg1 ;
@end

