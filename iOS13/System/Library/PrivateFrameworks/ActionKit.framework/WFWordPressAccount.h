/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFPasswordAccount.h>

@class NSURL;

@interface WFWordPressAccount : WFPasswordAccount {

	NSURL* _endpointURL;

}

@property (nonatomic,copy) NSURL * endpointURL;              //@synthesize endpointURL=_endpointURL - In the implementation block
+(unsigned long long)modelVersion;
+(id)localizedServiceName;
+(id)serviceID;
+(BOOL)allowsMultipleAccounts;
+(id)accountWithUsername:(id)arg1 password:(id)arg2 endpointURL:(id)arg3 ;
-(BOOL)isValid;
-(id)localizedName;
-(NSURL *)endpointURL;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3 ;
@end

