/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)dump;
-(id)initWithName:(id)arg1 description:(id)arg2 ;
-(NSString *)unitDescription;
-(id)generateDictionary;
-(void)setUnitDescription:(NSString *)arg1 ;
@end

