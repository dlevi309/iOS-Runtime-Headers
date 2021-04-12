/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

