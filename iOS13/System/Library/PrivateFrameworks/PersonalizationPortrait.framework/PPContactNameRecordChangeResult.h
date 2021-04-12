/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)changes;
-(BOOL)changesTruncated;
-(id)initWithChanges:(id)arg1 changesTruncated:(BOOL)arg2 ;
-(BOOL)isEqualToContactNameRecordChangeResult:(id)arg1 ;
@end

