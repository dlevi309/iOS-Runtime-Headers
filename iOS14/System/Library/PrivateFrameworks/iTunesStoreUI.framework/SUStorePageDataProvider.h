/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISDataProvider.h>

@class SUClientInterface, ISPropertyListProvider;

@interface SUStorePageDataProvider : ISDataProvider {

	SUClientInterface* _clientInterface;
	long long _outputType;
	ISPropertyListProvider* _propertyListDataProvider;

}

@property (retain) SUClientInterface * clientInterface;                          //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign) long long outputType;                                         //@synthesize outputType=_outputType - In the implementation block
@property (copy) ISPropertyListProvider * propertyListDataProvider;              //@synthesize propertyListDataProvider=_propertyListDataProvider - In the implementation block
@property (readonly) BOOL shouldProcessTouchIDDialogs; 
-(long long)outputType;
-(SUClientInterface *)clientInterface;
-(void)setOutputType:(long long)arg1 ;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(ISPropertyListProvider *)propertyListDataProvider;
-(BOOL)shouldProcessTouchIDDialogs;
-(void)_loadPersonalizedStoreOffersForPage:(id)arg1 ;
-(void)setPropertyListDataProvider:(ISPropertyListProvider *)arg1 ;
@end

