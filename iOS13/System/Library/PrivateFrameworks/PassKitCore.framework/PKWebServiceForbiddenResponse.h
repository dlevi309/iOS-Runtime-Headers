/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKWebServiceResponse.h>

@class NSNumber, NSString;

@interface PKWebServiceForbiddenResponse : PKWebServiceResponse {

	NSNumber* _errorCode;
	NSString* _localizedTitle;
	NSString* _localizedDescription;

}

@property (nonatomic,copy) NSNumber * errorCode;                         //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
-(NSString *)localizedDescription;
-(id)initWithData:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSNumber *)errorCode;
-(void)setErrorCode:(NSNumber *)arg1 ;
@end

