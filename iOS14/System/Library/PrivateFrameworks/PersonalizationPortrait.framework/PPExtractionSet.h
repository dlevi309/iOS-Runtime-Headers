/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PPExtractionSet : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _namedEntityRecords;
	NSArray* _topicRecords;

}

@property (nonatomic,readonly) NSArray * namedEntityRecords;              //@synthesize namedEntityRecords=_namedEntityRecords - In the implementation block
@property (nonatomic,readonly) NSArray * topicRecords;                    //@synthesize topicRecords=_topicRecords - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)merge:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithNamedEntityRecords:(id)arg1 topicRecords:(id)arg2 ;
-(NSArray *)namedEntityRecords;
-(NSArray *)topicRecords;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

