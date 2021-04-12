/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AAUpgradeiOSTermsResponse : AAResponse {

	NSData* _xmlUIData;

}

@property (nonatomic,readonly) NSData * xmlUIData;              //@synthesize xmlUIData=_xmlUIData - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(id)responseXMLData;
-(BOOL)bodyIsPlist;
-(NSData *)xmlUIData;
@end

