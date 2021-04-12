/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSDictionary, NSArray, NSString;

@interface VUITransactionOffer : NSObject {

	NSDictionary* _transactionOfferDict;
	NSArray* _videosPlayables;
	BOOL _initiateFamilySetup;
	NSDictionary* _offer;

}

@property (nonatomic,readonly) BOOL playWhenDone; 
@property (nonatomic,readonly) NSString * buyParams; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * videosPlayables; 
@property (nonatomic,copy,readonly) NSDictionary * offer;              //@synthesize offer=_offer - In the implementation block
@property (nonatomic,readonly) BOOL initiateFamilySetup;               //@synthesize initiateFamilySetup=_initiateFamilySetup - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(id)notificationTitle;
-(NSString *)buyParams;
-(NSDictionary *)offer;
-(NSString *)title;
-(id)notificationBody;
-(NSArray *)videosPlayables;
-(BOOL)playWhenDone;
-(id)getCanonicalID;
-(BOOL)initiateFamilySetup;
@end

