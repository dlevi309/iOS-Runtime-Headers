/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/EmailCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSString;

@interface ECSubject : NSObject <NSCopying, NSSecureCoding, EFPubliclyDescribable> {

	long long _hasReplyPrefixState;
	BOOL _hasPrefix;
	unsigned long long _length;
	NSString* _prefix;
	unsigned long long _prefixLength;
	NSString* _subjectWithoutPrefix;

}

@property (nonatomic,copy) NSString * subjectWithoutPrefix;                       //@synthesize subjectWithoutPrefix=_subjectWithoutPrefix - In the implementation block
@property (nonatomic,copy) NSString * prefix;                                     //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * subjectString; 
@property (nonatomic,readonly) unsigned long long length;                         //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) unsigned long long prefixLength;                   //@synthesize prefixLength=_prefixLength - In the implementation block
@property (nonatomic,readonly) BOOL hasPrefix;                                    //@synthesize hasPrefix=_hasPrefix - In the implementation block
@property (nonatomic,readonly) BOOL hasReplyPrefix; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
+(id)subjectWithString:(id)arg1 ;
+(id)_prefixTruncatedToMaximumAllowableSize:(id)arg1 ;
+(id)_uniqueString:(id)arg1 type:(long long)arg2 ;
+(id)_subjectTruncatedToMaximumAllowableSize:(id)arg1 ;
-(id)init;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(BOOL)hasPrefix;
-(NSString *)ef_publicDescription;
-(NSString *)subjectString;
-(BOOL)hasReplyPrefix;
-(NSString *)subjectWithoutPrefix;
-(id)initWithPrefix:(id)arg1 subjectWithoutPrefix:(id)arg2 ;
-(unsigned long long)prefixLength;
-(BOOL)isEqualToSubjectIgnoringPrefix:(id)arg1 ;
-(BOOL)isEqualToSubject:(id)arg1 ;
-(void)setSubjectWithoutPrefix:(NSString *)arg1 ;
@end

