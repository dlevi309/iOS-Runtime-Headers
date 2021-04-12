/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SGRecordId, NSString;

@interface SGReminderMetadata : NSObject <NSSecureCoding, NSCopying> {

	SGRecordId* _recordId;
	NSString* _sourceUniqueIdentifier;

}

@property (nonatomic,readonly) SGRecordId * recordId;                          //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,readonly) NSString * sourceUniqueIdentifier;              //@synthesize sourceUniqueIdentifier=_sourceUniqueIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SGRecordId *)recordId;
-(id)initWithRecordId:(id)arg1 sourceUniqueIdentifier:(id)arg2 ;
-(BOOL)isEqualToReminderMetadata:(id)arg1 ;
-(NSString *)sourceUniqueIdentifier;
@end

