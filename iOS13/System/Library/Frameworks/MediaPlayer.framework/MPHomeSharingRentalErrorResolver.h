/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned long long)itemID;
-(void)setDataProvider:(MPHomeSharingML3DataProvider *)arg1 ;
-(MPHomeSharingML3DataProvider *)dataProvider;
-(void)resolveError:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(BOOL)_errorIsFairPlayError:(id)arg1 ;
-(id)initWithItemID:(unsigned long long)arg1 homeSharingID:(unsigned long long)arg2 rentalID:(unsigned long long)arg3 accountID:(unsigned long long)arg4 ;
@end

