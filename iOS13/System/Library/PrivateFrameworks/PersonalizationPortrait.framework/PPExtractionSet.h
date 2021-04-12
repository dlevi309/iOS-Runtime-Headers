/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)merge:(id)arg1 ;
-(id)initWithNamedEntityRecords:(id)arg1 topicRecords:(id)arg2 ;
-(NSArray *)namedEntityRecords;
-(NSArray *)topicRecords;
@end

