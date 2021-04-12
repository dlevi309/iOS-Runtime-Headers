/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class AMSDeviceOffer, NSNumber, NSString;

@interface SUScriptDeviceOffer : SUScriptObject {

	AMSDeviceOffer* _offer;

}

@property (nonatomic,retain) AMSDeviceOffer * offer;                             //@synthesize offer=_offer - In the implementation block
@property (nonatomic,readonly) AMSDeviceOffer * nativeOffer; 
@property (nonatomic,readonly) NSNumber * adamId; 
@property (nonatomic,readonly) NSString * description; 
@property (getter=isDowngrading,nonatomic,readonly) id downgrading; 
@property (nonatomic,readonly) unsigned long long offerType; 
@property (getter=isSubscribed,nonatomic,readonly) id subscribed; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)description;
-(id)_className;
-(void)setDescription:(NSString *)arg1 ;
-(id)attributeKeys;
-(NSNumber *)adamId;
-(void)setAdamId:(NSNumber *)arg1 ;
-(void)setOfferType:(unsigned long long)arg1 ;
-(unsigned long long)offerType;
-(void)setSubscribed:(id)arg1 ;
-(id)isDowngrading;
-(id)isSubscribed;
-(void)setDowngrading:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)initWithDeviceOffer:(id)arg1 ;
-(AMSDeviceOffer *)offer;
-(AMSDeviceOffer *)nativeOffer;
-(void)setOffer:(AMSDeviceOffer *)arg1 ;
@end

