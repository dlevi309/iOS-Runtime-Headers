/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailAddressing.framework/EmailAddressing
*/

#import <EmailAddressing/EmailAddressing-Structs.h>
#import <CoreFoundation/NSMutableSet.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, NSData, NSString;

@interface EAEmailAddressSet : NSMutableSet <EFLoggable, NSSecureCoding> {

	NSMutableSet* _internalSet;

}

@property (nonatomic,retain) NSMutableSet * internalSet;                       //@synthesize internalSet=_internalSet - In the implementation block
@property (nonatomic,readonly) NSData * serializedRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)setWithCapacity:(unsigned long long)arg1 ;
+(id)set;
-(NSData *)serializedRepresentation;
-(void)intersectSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_EA0*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(NSMutableSet *)internalSet;
-(id)objectEnumerator;
-(BOOL)isEqualToSet:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(id)allObjects;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(void)setInternalSet:(NSMutableSet *)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

