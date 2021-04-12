/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)objectTypeWithName:(id)arg1 ;
+(id)objectTypeFromClass:(Class)arg1 ;
+(id)objectTypeWithTypeCode:(long long)arg1 ;
+(Class)associatedObjectClass;
+(long long)typeCodeFromName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)typeCode;
-(Class)objectClass;
-(id)initWithTypeCode:(long long)arg1 objectClass:(Class)arg2 ;
@end

