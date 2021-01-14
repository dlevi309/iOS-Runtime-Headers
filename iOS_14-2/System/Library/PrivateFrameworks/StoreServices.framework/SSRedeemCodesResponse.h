/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSDictionary, NSArray, NSString;

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding> {

	NSDictionary* _codeResponses;
	NSDictionary* _errors;
	NSDictionary* _redeemedCodes;

}

@property (nonatomic,copy,readonly) NSArray * codeResponses; 
@property (nonatomic,readonly) NSArray * failedCodes; 
@property (nonatomic,copy,readonly) NSArray * redeemedCodes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)errorForCode:(id)arg1 ;
-(NSArray *)codeResponses;
-(id)dictionaryForCode:(id)arg1 ;
-(NSArray *)failedCodes;
-(NSArray *)redeemedCodes;
-(id)responseDictionaryForCode:(id)arg1 ;
-(void)setCodeResponses:(NSArray *)arg1 ;
-(void)setFailedCodes:(NSArray *)arg1 ;
-(void)setRedeemedCodes:(NSArray *)arg1 ;
-(void)dealloc;
@end

