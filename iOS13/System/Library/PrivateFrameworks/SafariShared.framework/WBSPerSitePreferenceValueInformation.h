/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, NSNumber, NSDate;

@interface WBSPerSitePreferenceValueInformation : NSObject {

	NSString* _domain;
	NSNumber* _value;
	NSDate* _creationDate;

}

@property (nonatomic,copy,readonly) NSString * domain;              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSNumber * value;                    //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;               //@synthesize creationDate=_creationDate - In the implementation block
-(NSString *)domain;
-(NSNumber *)value;
-(NSDate *)creationDate;
-(id)initWithDomain:(id)arg1 value:(id)arg2 creationDate:(id)arg3 ;
@end

