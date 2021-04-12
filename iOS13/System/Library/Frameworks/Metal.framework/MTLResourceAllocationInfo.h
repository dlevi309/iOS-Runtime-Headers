/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MTLResourceAllocationInfo : NSObject <NSCopying, NSCoding>

@property (readonly) NSString * memoryPool; 
@property (readonly) unsigned long long virtualSize; 
@property (readonly) unsigned long long residentSize; 
@property (readonly) unsigned long long dirtySize; 
@property (readonly) BOOL pageoffRequired; 
@property (readonly) BOOL purgeable; 
@property (readonly) unsigned long long uniqueIdentifier; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

