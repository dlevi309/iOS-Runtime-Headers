/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISDialogOperationDelegate.h>

@class NSDictionary, NSString;

@interface SKUIRedeemIdValidateOperation : ISOperation <ISDialogOperationDelegate> {

	/*^block*/id _resultBlock;
	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (copy) id resultBlock;                                     //@synthesize resultBlock=_resultBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)resultBlock;
-(id)initWithDictionary:(id)arg1 ;
-(void)main;
-(NSDictionary *)dictionary;
-(void)setResultBlock:(id)arg1 ;
-(id)_subOperation;
-(void)_logResultsForSuccess:(BOOL)arg1 failureReason:(id)arg2 failureMessage:(id)arg3 error:(id)arg4 ;
-(void)_handleFailure:(id)arg1 serverDialogDictionary:(id)arg2 ;
-(void)operation:(id)arg1 selectedButton:(id)arg2 ;
@end

