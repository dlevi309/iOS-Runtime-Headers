/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setOutputType:(long long)arg1 ;
-(SUClientInterface *)clientInterface;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(ISPropertyListProvider *)propertyListDataProvider;
-(BOOL)shouldProcessTouchIDDialogs;
-(void)_loadPersonalizedStoreOffersForPage:(id)arg1 ;
-(void)setPropertyListDataProvider:(ISPropertyListProvider *)arg1 ;
@end

