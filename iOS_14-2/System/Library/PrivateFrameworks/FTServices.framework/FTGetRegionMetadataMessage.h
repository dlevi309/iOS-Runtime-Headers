/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/

#import <FTServices/FTServices-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying> {

	NSString* _language;
	NSDictionary* _responseRegionInformation;

}

@property (copy) NSString * language;                                   //@synthesize language=_language - In the implementation block
@property (copy) NSDictionary * responseRegionInformation;              //@synthesize responseRegionInformation=_responseRegionInformation - In the implementation block
-(id)init;
-(BOOL)wantsHTTPHeaders;
-(void)setLanguage:(NSString *)arg1 ;
-(long long)responseCommand;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsHTTPGet;
-(BOOL)wantsBagKey;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)requiredKeys;
-(NSDictionary *)responseRegionInformation;
-(void)setResponseRegionInformation:(NSDictionary *)arg1 ;
-(long long)command;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(id)bagKey;
-(id)messageBody;
@end

