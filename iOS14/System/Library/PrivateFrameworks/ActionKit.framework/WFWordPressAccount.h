/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFPasswordAccount.h>

@class NSURL;

@interface WFWordPressAccount : WFPasswordAccount {

	NSURL* _endpointURL;

}

@property (nonatomic,copy) NSURL * endpointURL;              //@synthesize endpointURL=_endpointURL - In the implementation block
+(unsigned long long)modelVersion;
+(id)serviceID;
+(id)localizedServiceName;
+(BOOL)allowsMultipleAccounts;
+(id)accountWithUsername:(id)arg1 password:(id)arg2 endpointURL:(id)arg3 ;
-(id)localizedName;
-(NSURL *)endpointURL;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isValid;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3 ;
@end

