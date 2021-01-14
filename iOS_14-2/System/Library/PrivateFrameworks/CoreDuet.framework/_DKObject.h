/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKProtobufConverting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, _DKSource, NSDate, NSString;

@interface _DKObject : NSObject <_DKProtobufConverting, NSSecureCoding> {

	NSUUID* _UUID;
	_DKSource* _source;
	NSDate* _creationDate;
	NSDate* _localCreationDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSUUID * UUID;                                   //@synthesize UUID=_UUID - In the implementation block
@property (retain) _DKSource * source;                              //@synthesize source=_source - In the implementation block
@property (retain) NSDate * creationDate;                           //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSDate * localCreationDate;                      //@synthesize localCreationDate=_localCreationDate - In the implementation block
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)fetchObjectWithUUID:(id)arg1 context:(id)arg2 ;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
+(id)fromPBCodable:(id)arg1 ;
-(id)toPBCodable;
-(id)entityName;
-(long long)integerValue;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(double)doubleValue;
-(BOOL)boolValue;
-(NSUUID *)UUID;
-(id)init;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)localCreationDate;
-(void)setLocalCreationDate:(NSDate *)arg1 ;
-(BOOL)copyBaseObjectInfoFromManagedObject:(id)arg1 cache:(id)arg2 ;
-(id)stringValue;
-(void)setSource:(_DKSource *)arg1 ;
-(NSString *)description;
-(NSDate *)creationDate;
-(long long)typeCode;
-(id)initWithCoder:(id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(_DKSource *)source;
@end

