/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SGMailMessageKey : NSObject <NSCopying, NSSecureCoding> {

	NSString* _source;
	NSString* _messageId;

}

@property (nonatomic,readonly) NSString * source;                 //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * messageId;              //@synthesize messageId=_messageId - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSource:(id)arg1 messageId:(id)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToMailMessageKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)messageId;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)source;
@end

