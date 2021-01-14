/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class WBSCredentialMatch, NSString, NSDate;

@interface SFCredentialDisplayData : NSObject {

	WBSCredentialMatch* _match;
	NSString* _detail;
	NSDate* _creationDate;

}

@property (nonatomic,readonly) WBSCredentialMatch * match;              //@synthesize match=_match - In the implementation block
@property (nonatomic,copy,readonly) NSString * detail;                  //@synthesize detail=_detail - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                   //@synthesize creationDate=_creationDate - In the implementation block
+(id)descriptionForPasswordWithUser:(id)arg1 creationDate:(id)arg2 ;
-(NSString *)detail;
-(WBSCredentialMatch *)match;
-(NSDate *)creationDate;
-(id)initWithMatch:(id)arg1 detail:(id)arg2 creationDate:(id)arg3 ;
@end

