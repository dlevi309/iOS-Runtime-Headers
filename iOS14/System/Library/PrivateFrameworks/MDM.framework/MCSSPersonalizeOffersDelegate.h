/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

