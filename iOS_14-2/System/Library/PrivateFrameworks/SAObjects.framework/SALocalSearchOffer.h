/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAUIAppPunchOut;

@interface SALocalSearchOffer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) SAUIAppPunchOut * offerPunchOut; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)offerWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)offer;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(SAUIAppPunchOut *)offerPunchOut;
-(void)setOfferPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
@end

