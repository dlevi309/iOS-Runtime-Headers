/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary;

@interface SKThreadSafeMutableDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {

	opaque_pthread_mutex_t _storageLock;
	NSMutableDictionary* _storage;

}
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithNSMutableDictionary:(id)arg1 ;
@end

