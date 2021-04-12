/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol BCSAction;
@class BCSQRCodeParser, NSMutableSet;

@interface _SFQRCodeDetectionController : NSObject {

	BCSQRCodeParser* _QRCodeParser;
	id<BCSAction> _lastDetectedAction;
	NSMutableSet* _cachedElements;

}
+(id)sharedController;
-(id)init;
-(void)clearCachedElement:(id)arg1 ;
-(id)menuElementsForElementInfo:(id)arg1 ;
-(id)actionForElement:(id)arg1 ;
-(void)cacheElement:(id)arg1 ;
-(id)adjustedCopyActionForAction:(id)arg1 elementInfo:(id)arg2 ;
-(void)getActionForImage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getActionForImageSynchronously:(id)arg1 userInfo:(id*)arg2 ;
-(id)elementForAction:(id)arg1 ;
@end

