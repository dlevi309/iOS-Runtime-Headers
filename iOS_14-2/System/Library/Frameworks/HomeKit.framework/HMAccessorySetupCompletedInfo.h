/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface HMAccessorySetupCompletedInfo : NSObject <NSSecureCoding> {

	NSArray* _addedAccessoryUUIDs;
	NSString* _homeUUID;

}

@property (nonatomic,retain) NSArray * addedAccessoryUUIDs;              //@synthesize addedAccessoryUUIDs=_addedAccessoryUUIDs - In the implementation block
@property (nonatomic,retain) NSString * homeUUID;                        //@synthesize homeUUID=_homeUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)homeUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)addedAccessoryUUIDs;
-(id)initWithHome:(id)arg1 accessoryList:(id)arg2 ;
-(void)setAddedAccessoryUUIDs:(NSArray *)arg1 ;
-(void)setHomeUUID:(NSString *)arg1 ;
@end

