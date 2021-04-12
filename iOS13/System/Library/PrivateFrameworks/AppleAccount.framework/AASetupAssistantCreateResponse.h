/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)status;
-(NSString *)appleID;
-(NSString *)personID;
-(NSString *)statusMessage;
-(NSString *)HSAAction;
-(NSString *)HSAData;
@end

