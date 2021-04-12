/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)uuidStr;
-(NSString *)name;
-(id)description;
-(void)setUuidStr:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)identifier;
-(NSString *)catDescription;
-(id)initWithIdentifier:(id)arg1 uuid:(id)arg2 name:(id)arg3 description:(id)arg4 ;
-(void)setCatDescription:(NSString *)arg1 ;
@end

