/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)creationDate;
-(id)initWithDomain:(id)arg1 value:(id)arg2 creationDate:(id)arg3 ;
-(NSNumber *)value;
@end

