/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/_DKObject.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>
#import <libobjc.A.dylib/_DKHasObjectType.h>

@class NSString, _DKIdentifierType;

@interface _DKIdentifier : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType> {

	NSString* _stringValue;
	_DKIdentifierType* _identifierType;

}

@property (retain) NSString * stringValue;                          //@synthesize stringValue=_stringValue - In the implementation block
@property (retain) _DKIdentifierType * identifierType;              //@synthesize identifierType=_identifierType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)_identifierFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
+(id)identifierWithString:(id)arg1 type:(id)arg2 ;
+(id)fromPBCodable:(id)arg1 ;
-(id)toPBCodable;
-(long long)integerValue;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(double)doubleValue;
-(id)initWithString:(id)arg1 type:(id)arg2 ;
-(id)objectType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)primaryValue;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)description;
-(long long)typeCode;
-(id)initWithCoder:(id)arg1 ;
-(long long)compareValue:(id)arg1 ;
-(void)setIdentifierType:(_DKIdentifierType *)arg1 ;
-(_DKIdentifierType *)identifierType;
-(BOOL)isEqual:(id)arg1 ;
@end

