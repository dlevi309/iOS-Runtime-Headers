/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPMetadataUnit : HMFObject {

	NSString* _name;
	NSString* _unitDescription;

}

@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * unitDescription;              //@synthesize unitDescription=_unitDescription - In the implementation block
+(id)init:(id)arg1 withDictionary:(id)arg2 ;
-(id)generateDictionary;
-(void)dump;
-(NSString *)unitDescription;
-(void)setUnitDescription:(NSString *)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 description:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
@end

