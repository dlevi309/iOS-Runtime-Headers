/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSString, NSNumber, NSLock, NSMutableDictionary;

@interface SKUIMediaSocialUpdateProfileOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSString* _entityType;
	NSNumber* _identifier;
	NSLock* _lock;
	NSMutableDictionary* _parameters;
	/*^block*/id _outputBlock;

}

@property (copy) NSString * entityType; 
@property (copy) NSNumber * identifier; 
@property (copy) id outputBlock; 
-(NSString *)entityType;
-(void)setOutputBlock:(id)arg1 ;
-(void)main;
-(id)outputBlock;
-(void)setEntityType:(NSString *)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)identifier;
-(void)setValue:(id)arg1 forProfileField:(id)arg2 ;
-(id)_imageDictionaryFromPhotoUpload:(id)arg1 ;
-(id)_requestWithError:(id*)arg1 ;
-(id)_requestBodyWithError:(id*)arg1 ;
@end

