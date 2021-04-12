/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, SGRecordId;

@interface SGContactMatchArrayOption : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _type;
	NSArray* _matches;
	SGRecordId* _recordId;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * matches;                    //@synthesize matches=_matches - In the implementation block
@property (nonatomic,readonly) SGRecordId * recordId;                //@synthesize recordId=_recordId - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)matches;
-(SGRecordId *)recordId;
-(id)initWithMatches:(id)arg1 ;
-(id)initWithRecordId:(id)arg1 ;
-(BOOL)isEqualToContactMatchArrayOption:(id)arg1 ;
@end

