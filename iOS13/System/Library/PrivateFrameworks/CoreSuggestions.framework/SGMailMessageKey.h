/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)source;
-(NSString *)messageId;
-(id)initWithSource:(id)arg1 messageId:(id)arg2 ;
-(BOOL)isEqualToMailMessageKey:(id)arg1 ;
@end

