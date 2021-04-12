/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriFindMy.framework/SiriFindMy
*/

#import <Intents/INObject.h>

@class NSString, INPerson, NSNumber;

@interface DeviceDetail : INObject

@property (copy,nonatomic) NSString * deviceName; 
@property (copy,nonatomic) NSString * deviceClass; 
@property (copy,nonatomic) NSString * productName; 
@property (copy,nonatomic) NSString * category; 
@property (assign,nonatomic) long long deviceLocality; 
@property (retain,nonatomic) INPerson * deviceOwner; 
@property (copy,nonatomic) NSString * emoji; 
@property (retain,nonatomic) NSNumber * isTheOnlyOneFound; 
@property (copy,nonatomic) NSString * productType; 
@property (retain,nonatomic) NSNumber * isEarbuds; 
@property (retain,nonatomic) NSNumber * isHeadphones; 
@property (copy,nonatomic) NSString * productNameSemantic; 
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
@end

