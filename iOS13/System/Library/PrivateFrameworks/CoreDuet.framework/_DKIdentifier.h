/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)identifierWithString:(id)arg1 type:(id)arg2 ;
+(id)fromPBCodable:(id)arg1 ;
+(id)entityName;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
+(id)_identifierFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)integerValue;
-(id)initWithString:(id)arg1 type:(id)arg2 ;
-(_DKIdentifierType *)identifierType;
-(long long)compareValue:(id)arg1 ;
-(id)primaryValue;
-(id)objectType;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setIdentifierType:(_DKIdentifierType *)arg1 ;
-(id)toPBCodable;
-(long long)typeCode;
-(BOOL)copyToManagedObject:(id)arg1 ;
@end

