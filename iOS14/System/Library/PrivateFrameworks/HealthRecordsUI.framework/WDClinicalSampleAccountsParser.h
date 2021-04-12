/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class NSString;

@interface WDClinicalSampleAccountsParser : NSObject {

	NSString* _accountFilename;

}

@property (nonatomic,copy) NSString * accountFilename;              //@synthesize accountFilename=_accountFilename - In the implementation block
+(id)_jsonDictionaryFromJSONObject:(id)arg1 subElement:(id)arg2 error:(id*)arg3 ;
+(id)_stringOnlyDictionaryFromJSONDictionary:(id)arg1 ;
-(id)initWithAccountFilename:(id)arg1 ;
-(id)parsedAccountsWithError:(id*)arg1 ;
-(id)_parseAccountsFromJSONData:(id)arg1 error:(id*)arg2 ;
-(NSString *)accountFilename;
-(id)_parseProviderFromSampleAccountJSONDict:(id)arg1 error:(id*)arg2 ;
-(id)_parseBatchesFromSampleAccountJSONDict:(id)arg1 error:(id*)arg2 ;
-(id)_parseGatewayFromProviderJSONDict:(id)arg1 error:(id*)arg2 ;
-(void)setAccountFilename:(NSString *)arg1 ;
@end

