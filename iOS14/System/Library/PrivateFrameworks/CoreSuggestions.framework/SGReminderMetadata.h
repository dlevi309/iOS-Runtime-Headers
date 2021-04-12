/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SGRecordId *)recordId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithRecordId:(id)arg1 sourceUniqueIdentifier:(id)arg2 ;
-(BOOL)isEqualToReminderMetadata:(id)arg1 ;
-(NSString *)sourceUniqueIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

