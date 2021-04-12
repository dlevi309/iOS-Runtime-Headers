/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface FADeclineChildTransferRequest : AAFamilyRequest {

	NSString* _requestCode;

}

@property (nonatomic,copy) NSString * requestCode;              //@synthesize requestCode=_requestCode - In the implementation block
-(BOOL)isUserInitiated;
-(id)urlRequest;
-(id)urlString;
-(NSString *)requestCode;
-(void)setRequestCode:(NSString *)arg1 ;
@end

