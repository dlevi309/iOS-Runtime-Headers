/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMAccessorySetupCompletedInfo : NSObject <NSSecureCoding> {

	NSArray* _addedAccessoryUUIDs;

}

@property (nonatomic,retain) NSArray * addedAccessoryUUIDs;              //@synthesize addedAccessoryUUIDs=_addedAccessoryUUIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)addedAccessoryUUIDs;
-(id)initWithAccessoryList:(id)arg1 ;
-(void)setAddedAccessoryUUIDs:(NSArray *)arg1 ;
@end

