/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVErrorResolver.h>
#import <libobjc.A.dylib/SSRequestDelegate.h>

@class MPHomeSharingML3DataProvider, NSError, SSRentalCheckoutRequest, NSString;

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate> {

	unsigned long long _accountID;
	MPHomeSharingML3DataProvider* _dataProvider;
	NSError* _error;
	unsigned long long _itemID;
	unsigned long long _homeSharingID;
	unsigned long long _rentalID;
	SSRentalCheckoutRequest* _request;

}

@property (nonatomic,retain) MPHomeSharingML3DataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long itemID;                              //@synthesize itemID=_itemID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataProvider:(MPHomeSharingML3DataProvider *)arg1 ;
-(void)resolveError:(id)arg1 ;
-(unsigned long long)itemID;
-(MPHomeSharingML3DataProvider *)dataProvider;
-(void)requestDidFinish:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)_errorIsFairPlayError:(id)arg1 ;
-(id)initWithItemID:(unsigned long long)arg1 homeSharingID:(unsigned long long)arg2 rentalID:(unsigned long long)arg3 accountID:(unsigned long long)arg4 ;
-(void)dealloc;
@end

