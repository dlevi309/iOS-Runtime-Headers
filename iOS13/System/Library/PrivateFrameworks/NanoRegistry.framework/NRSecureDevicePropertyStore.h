/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface NRSecureDevicePropertyStore : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _IDToProperty;
	NSMutableDictionary* _propertyToID;
	NSObject*<OS_dispatch_queue> _dirtyQueue;
	BOOL _dirty;

}

@property (nonatomic,readonly) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
+(id)classTypes;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)dirty;
-(void)forceImportSecureProperties:(id)arg1 ;
-(id)allSecurePropertyIDs;
-(void)removeSecureProperty:(id)arg1 ;
-(id)securePropertyForID:(id)arg1 ;
-(id)storeSecureProperty:(id)arg1 ;
-(void)forceWriteSecurePropertyID:(id)arg1 withValue:(id)arg2 ;
@end

