/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(NSNumber *)errorCode;
-(id)initWithData:(id)arg1 ;
-(NSString *)localizedDescription;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setErrorCode:(NSNumber *)arg1 ;
@end

