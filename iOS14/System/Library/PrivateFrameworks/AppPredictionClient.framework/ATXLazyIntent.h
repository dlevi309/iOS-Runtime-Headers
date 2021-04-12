/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@protocol ATXLazyIntentDelegateProtocol;
@class INIntent, NSData;

@interface ATXLazyIntent : NSObject {

	INIntent* _intent;
	NSData* _intentData;
	id<ATXLazyIntentDelegateProtocol> _delegate;

}

@property (nonatomic,readonly) INIntent * intent; 
@property (nonatomic,readonly) NSData * intentData; 
@property (assign,nonatomic,__weak) id<ATXLazyIntentDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(INIntent *)intent;
-(id)init;
-(id<ATXLazyIntentDelegateProtocol>)delegate;
-(void)setDelegate:(id<ATXLazyIntentDelegateProtocol>)arg1 ;
-(NSData *)intentData;
-(BOOL)isDeserialized;
-(id)initWithIntent:(id)arg1 ;
-(void)handleMemoryPressure;
-(id)initWithIntentData:(id)arg1 ;
-(id)initWithIntent:(id)arg1 intentData:(id)arg2 ;
-(id)_deserializeIntent;
@end

