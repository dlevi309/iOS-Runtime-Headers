/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)errorForCode:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSArray *)codeResponses;
-(id)dictionaryForCode:(id)arg1 ;
-(NSArray *)failedCodes;
-(NSArray *)redeemedCodes;
-(id)responseDictionaryForCode:(id)arg1 ;
-(void)setCodeResponses:(NSArray *)arg1 ;
-(void)setFailedCodes:(NSArray *)arg1 ;
-(void)setRedeemedCodes:(NSArray *)arg1 ;
@end

