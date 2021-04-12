/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSString;

@interface HMDHAPMetadataCategory : HMFObject {

	NSNumber* _identifier;
	NSString* _uuidStr;
	NSString* _name;
	NSString* _catDescription;

}

@property (nonatomic,retain) NSNumber * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * uuidStr;                     //@synthesize uuidStr=_uuidStr - In the implementation block
@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * catDescription;              //@synthesize catDescription=_catDescription - In the implementation block
-(id)init;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)identifier;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(NSString *)uuidStr;
-(void)setUuidStr:(NSString *)arg1 ;
-(NSString *)catDescription;
-(id)initWithIdentifier:(id)arg1 uuid:(id)arg2 name:(id)arg3 description:(id)arg4 ;
-(void)setCatDescription:(NSString *)arg1 ;
@end

