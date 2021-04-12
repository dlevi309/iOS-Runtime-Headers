/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _DKObjectType : NSObject <NSSecureCoding, NSCopying> {

	long long _typeCode;
	Class _objectClass;

}

@property (nonatomic,readonly) long long typeCode; 
@property (nonatomic,readonly) Class objectClass; 
+(BOOL)supportsSecureCoding;
+(long long)typeCodeFromName:(id)arg1 ;
+(id)objectTypeWithTypeCode:(long long)arg1 ;
+(id)objectTypeWithName:(id)arg1 ;
+(id)objectTypeFromClass:(Class)arg1 ;
+(Class)associatedObjectClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)typeCode;
-(unsigned long long)hash;
-(Class)objectClass;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTypeCode:(long long)arg1 objectClass:(Class)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

