/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CREquatable.h>
#import <libobjc.A.dylib/CRIdentifiable.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSUUID, NSDictionary, NSString;

@interface CRObject : NSObject <CRDataType, CREquatable, CRIdentifiable, CRCoding> {

	NSUUID* _identity;
	NSDictionary* _fields;

}

@property (nonatomic,readonly) NSUUID * identity;                   //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) NSDictionary * fields;               //@synthesize fields=_fields - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)CRProperties;
+(id)keyFromSelector:(SEL)arg1 ;
-(NSDictionary *)fields;
-(id)init;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(NSUUID *)identity;
-(void)setDocument:(id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(void)setupConstraintsFor:(id)arg1 in:(id)arg2 ;
-(id)initWithIdentity:(id)arg1 fields:(id)arg2 ;
-(void)setFieldKey:(id)arg1 value:(id)arg2 ;
-(NSString *)description;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)tombstone;
-(void)mergeWithObject:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

