/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <Foundation/NSKeyedUnarchiver.h>
#import <libobjc.A.dylib/MTSerializer.h>

@class NSCoder;

@interface MTStorageReaderV1 : NSKeyedUnarchiver <MTSerializer>

@property (nonatomic,readonly) unsigned long long mtType; 
@property (nonatomic,readonly) NSCoder * mtCoder; 
-(unsigned long long)mtType;
-(NSCoder *)mtCoder;
@end

