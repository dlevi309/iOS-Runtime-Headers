/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSString;

@interface WBSPhishingConfigurationImageClassifierIdentifier : NSObject {

	float _minimumConfidence;
	NSString* _domainName;

}

@property (nonatomic,copy,readonly) NSString * domainName;              //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,readonly) float minimumConfidence;                 //@synthesize minimumConfidence=_minimumConfidence - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)domainName;
-(float)minimumConfidence;
-(id)initWithDomain:(id)arg1 minimumConfidence:(float)arg2 ;
@end

