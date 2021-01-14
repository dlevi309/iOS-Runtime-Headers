/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/


@class NSString, NSNumber, NSArray;

@interface FASharedServiceGroup : NSObject {

	NSString* _headerText;
	NSString* _footerText;
	NSNumber* _groupID;
	NSArray* _services;

}

@property (nonatomic,retain) NSString * headerText;              //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,retain) NSString * footerText;              //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,retain) NSNumber * groupID;                 //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSArray * services;                 //@synthesize services=_services - In the implementation block
-(NSArray *)services;
-(void)setFooterText:(NSString *)arg1 ;
-(void)setServices:(NSArray *)arg1 ;
-(NSNumber *)groupID;
-(void)setGroupID:(NSNumber *)arg1 ;
-(id)description;
-(NSString *)footerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(NSString *)headerText;
-(id)initWithServerResponse:(id)arg1 ;
@end

