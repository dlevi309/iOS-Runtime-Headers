/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PPSourceMetadata, NSString, NSDate;

@interface PPSource : _PASZonedObject <NSCopying, NSSecureCoding> {

	PPSourceMetadata* _metadata;
	NSString* _bundleId;
	NSString* _groupId;
	NSString* _documentId;
	NSDate* _date;

}

@property (nonatomic,readonly) PPSourceMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                      //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * groupId;                       //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,readonly) NSString * documentId;                    //@synthesize documentId=_documentId - In the implementation block
@property (nonatomic,readonly) NSDate * date;                            //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(PPSourceMetadata *)metadata;
-(NSString *)bundleId;
-(NSString *)groupId;
-(id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4 ;
-(id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4 metadata:(id)arg5 ;
-(BOOL)isEqualToSource:(id)arg1 ;
-(NSString *)documentId;
@end

