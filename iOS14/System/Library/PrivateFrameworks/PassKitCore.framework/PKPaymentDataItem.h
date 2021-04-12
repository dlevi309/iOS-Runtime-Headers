/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class PKPaymentAuthorizationDataModel, NSArray, NSString;

@interface PKPaymentDataItem : NSObject <PKPaymentValidating> {

	long long _type;
	long long _status;
	PKPaymentAuthorizationDataModel* _model;

}

@property (assign,nonatomic,__weak) PKPaymentAuthorizationDataModel * model;              //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) long long type;                                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long status;                                            //@synthesize status=_status - In the implementation block
@property (getter=isRejected,nonatomic,readonly) BOOL rejected; 
@property (nonatomic,readonly) NSArray * errors; 
@property (nonatomic,readonly) NSArray * paymentContactFormatErrors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)dataType;
+(BOOL)supportsMultipleItems;
-(PKPaymentAuthorizationDataModel *)model;
-(void)setType:(long long)arg1 ;
-(void)setModel:(PKPaymentAuthorizationDataModel *)arg1 ;
-(BOOL)isRejected;
-(long long)type;
-(NSArray *)errors;
-(void)setStatus:(long long)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(NSArray *)paymentContactFormatErrors;
-(id)initWithModel:(id)arg1 ;
-(long long)status;
@end

