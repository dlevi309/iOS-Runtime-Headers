/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber;

@interface HAPMetadataProperty : HMFObject {

	NSString* _propertyDescription;
	NSString* _propertyType;
	NSNumber* _bitPosition;

}

@property (nonatomic,retain) NSString * propertyType;              //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,retain) NSNumber * bitPosition;               //@synthesize bitPosition=_bitPosition - In the implementation block
@property (copy) NSString * propertyDescription;                   //@synthesize propertyDescription=_propertyDescription - In the implementation block
+(id)init:(id)arg1 withDictionary:(id)arg2 ;
-(id)generateDictionary;
-(void)dump;
-(void)setPropertyDescription:(NSString *)arg1 ;
-(NSNumber *)bitPosition;
-(id)description;
-(void)setPropertyType:(NSString *)arg1 ;
-(void)setBitPosition:(NSNumber *)arg1 ;
-(NSString *)propertyType;
-(NSString *)propertyDescription;
-(id)initWithType:(id)arg1 bitPosition:(id)arg2 description:(id)arg3 ;
@end

