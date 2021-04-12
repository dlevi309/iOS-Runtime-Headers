/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSDictionary, NSArray, NSString;

@interface VUITransactionOffer : NSObject {

	NSDictionary* _transactionOfferDict;
	NSArray* _videosPlayables;
	NSDictionary* _offer;

}

@property (nonatomic,readonly) BOOL playWhenDone; 
@property (nonatomic,readonly) NSString * buyParams; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * videosPlayables; 
@property (nonatomic,copy,readonly) NSDictionary * offer;              //@synthesize offer=_offer - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)buyParams;
-(NSDictionary *)offer;
-(id)notificationTitle;
-(NSArray *)videosPlayables;
-(BOOL)playWhenDone;
-(id)notificationBody;
@end

