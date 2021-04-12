/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSString, NSNumber;

@interface AASetupAssistantCreateResponse : AAResponse {

	NSString* _HSAAction;
	NSString* _HSAData;

}

@property (nonatomic,readonly) NSNumber * status; 
@property (nonatomic,readonly) NSString * statusMessage; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,readonly) NSString * appleID; 
@property (nonatomic,readonly) NSString * HSAAction;                  //@synthesize HSAAction=_HSAAction - In the implementation block
@property (nonatomic,readonly) NSString * HSAData;                    //@synthesize HSAData=_HSAData - In the implementation block
-(NSString *)HSAData;
-(NSString *)personID;
-(NSString *)statusMessage;
-(NSString *)appleID;
-(NSString *)HSAAction;
-(NSNumber *)status;
@end

