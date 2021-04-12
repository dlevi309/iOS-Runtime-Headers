/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSDate, NSError;

@interface HAPKeychainStoreRemovedAccessory : HMFObject {

	NSString* _accessoryName;
	NSDate* _creationDate;
	NSError* _removeError;

}

@property (nonatomic,readonly) NSString * accessoryName;              //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSError * removeError;                   //@synthesize removeError=_removeError - In the implementation block
-(id)description;
-(NSDate *)creationDate;
-(NSString *)accessoryName;
-(NSError *)removeError;
-(id)initWithName:(id)arg1 creationDate:(id)arg2 ;
-(void)setRemoveError:(NSError *)arg1 ;
@end

