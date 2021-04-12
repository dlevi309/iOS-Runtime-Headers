/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PPContactNameRecordChangeResult : NSObject <NSSecureCoding, NSCopying> {

	BOOL _changesTruncated;
	NSArray* _changes;

}

@property (nonatomic,readonly) NSArray * changes;                  //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) BOOL changesTruncated;              //@synthesize changesTruncated=_changesTruncated - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contactNameRecordChangeResultWithChanges:(id)arg1 changesTruncated:(BOOL)arg2 ;
-(NSArray *)changes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)changesTruncated;
-(id)initWithChanges:(id)arg1 changesTruncated:(BOOL)arg2 ;
-(BOOL)isEqualToContactNameRecordChangeResult:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

