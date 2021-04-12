/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
*/

#import <MDM/MCSSRequestDelegate.h>
#import <libobjc.A.dylib/SSPersonalizeOffersDelegate.h>

@class SSPersonalizeOffersResponse, SSPersonalizeOffersRequest, NSString;

@interface MCSSPersonalizeOffersDelegate : MCSSRequestDelegate <SSPersonalizeOffersDelegate> {

	SSPersonalizeOffersResponse* _response;

}

@property (nonatomic,retain,readonly) SSPersonalizeOffersRequest * request; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithItems:(id)arg1 ;
-(void)personalizeOffersRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)startCompletionBlock:(/*^block*/id)arg1 ;
@end

