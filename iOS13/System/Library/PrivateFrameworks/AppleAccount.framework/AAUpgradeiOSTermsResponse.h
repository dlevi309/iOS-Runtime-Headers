/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AAUpgradeiOSTermsResponse : AAResponse {

	NSData* _xmlUIData;

}

@property (nonatomic,readonly) NSData * xmlUIData;              //@synthesize xmlUIData=_xmlUIData - In the implementation block
-(NSData *)xmlUIData;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(id)responseXMLData;
-(BOOL)bodyIsPlist;
@end

