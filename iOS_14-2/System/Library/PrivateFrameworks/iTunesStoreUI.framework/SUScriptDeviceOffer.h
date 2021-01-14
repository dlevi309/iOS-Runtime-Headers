/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)attributeKeys;
-(NSString *)description;
-(void)setSubscribed:(id)arg1 ;
-(void)setOfferType:(unsigned long long)arg1 ;
-(id)isSubscribed;
-(void)setOffer:(AMSDeviceOffer *)arg1 ;
-(id)_className;
-(void)setDescription:(NSString *)arg1 ;
-(unsigned long long)offerType;
-(NSNumber *)adamId;
-(AMSDeviceOffer *)offer;
-(void)setAdamId:(NSNumber *)arg1 ;
-(id)isDowngrading;
-(void)setDowngrading:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)initWithDeviceOffer:(id)arg1 ;
-(AMSDeviceOffer *)nativeOffer;
@end

