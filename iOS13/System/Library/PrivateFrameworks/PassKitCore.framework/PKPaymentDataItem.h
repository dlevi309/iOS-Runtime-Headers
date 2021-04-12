/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)dataType;
+(BOOL)supportsMultipleItems;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(long long)status;
-(PKPaymentAuthorizationDataModel *)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(PKPaymentAuthorizationDataModel *)arg1 ;
-(NSArray *)errors;
-(void)setStatus:(long long)arg1 ;
-(BOOL)isRejected;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

