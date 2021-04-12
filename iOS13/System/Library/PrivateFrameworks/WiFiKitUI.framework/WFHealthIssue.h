/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/


@class NSString;

@interface WFHealthIssue : NSObject {

	BOOL _overrideIssue;
	BOOL _chinaDevice;
	unsigned long long _type;
	unsigned long long _category;
	NSString* _issueShortTitle;
	NSString* _issueTitle;
	NSString* _issueDescription;
	NSString* _issueRecommendation;

}

@property (nonatomic,copy) NSString * issueShortTitle;                  //@synthesize issueShortTitle=_issueShortTitle - In the implementation block
@property (nonatomic,copy) NSString * issueTitle;                       //@synthesize issueTitle=_issueTitle - In the implementation block
@property (nonatomic,copy) NSString * issueDescription;                 //@synthesize issueDescription=_issueDescription - In the implementation block
@property (nonatomic,copy) NSString * issueRecommendation;              //@synthesize issueRecommendation=_issueRecommendation - In the implementation block
@property (assign,nonatomic) unsigned long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long category;               //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL chinaDevice;                          //@synthesize chinaDevice=_chinaDevice - In the implementation block
@property (nonatomic,readonly) NSString * issueDetailText; 
@property (assign,nonatomic) BOOL overrideIssue;                        //@synthesize overrideIssue=_overrideIssue - In the implementation block
+(id)issueWithType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)descriptionForType:(unsigned long long)arg1 ;
-(unsigned long long)categoryForType:(unsigned long long)arg1 ;
-(id)titleForType:(unsigned long long)arg1 ;
-(void)setIssueDescription:(NSString *)arg1 ;
-(NSString *)issueDescription;
-(void)setOverrideIssue:(BOOL)arg1 ;
-(NSString *)issueShortTitle;
-(id)shortTitleForType:(unsigned long long)arg1 ;
-(id)recommendationForType:(unsigned long long)arg1 ;
-(BOOL)isEqualToHealthIssue:(id)arg1 ;
-(NSString *)issueRecommendation;
-(BOOL)overrideIssue;
-(NSString *)issueTitle;
-(NSString *)issueDetailText;
-(void)setIssueShortTitle:(NSString *)arg1 ;
-(void)setIssueTitle:(NSString *)arg1 ;
-(void)setIssueRecommendation:(NSString *)arg1 ;
-(BOOL)chinaDevice;
-(void)setChinaDevice:(BOOL)arg1 ;
@end

