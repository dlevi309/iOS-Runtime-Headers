/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSURL;

@interface ICInAppMessageConfiguration : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSURL * reportEventURL; 
@property (nonatomic,readonly) NSURL * serialCheckURL; 
@property (nonatomic,readonly) NSURL * syncURL; 
@property (nonatomic,readonly) NSURL * resourceDomainURL; 
@property (nonatomic,readonly) long long syncPollingInterval; 
-(NSURL *)resourceDomainURL;
-(NSURL *)reportEventURL;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)serialCheckURL;
-(NSURL *)syncURL;
-(long long)syncPollingInterval;
@end

