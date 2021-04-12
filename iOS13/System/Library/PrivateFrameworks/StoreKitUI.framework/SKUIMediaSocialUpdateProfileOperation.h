/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)identifier;
-(void)main;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(NSString *)entityType;
-(void)setEntityType:(NSString *)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 ;
-(void)setValue:(id)arg1 forProfileField:(id)arg2 ;
-(id)_imageDictionaryFromPhotoUpload:(id)arg1 ;
-(id)_requestWithError:(id*)arg1 ;
-(id)_requestBodyWithError:(id*)arg1 ;
@end

