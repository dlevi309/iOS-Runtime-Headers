/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)dump;
-(NSString *)propertyDescription;
-(NSString *)propertyType;
-(void)setPropertyDescription:(NSString *)arg1 ;
-(void)setPropertyType:(NSString *)arg1 ;
-(id)generateDictionary;
-(id)initWithType:(id)arg1 bitPosition:(id)arg2 description:(id)arg3 ;
-(NSNumber *)bitPosition;
-(void)setBitPosition:(NSNumber *)arg1 ;
@end

