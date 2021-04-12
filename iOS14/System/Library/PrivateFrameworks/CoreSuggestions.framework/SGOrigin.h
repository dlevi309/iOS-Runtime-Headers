/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CSPerson, NSArray, NSDate, SGSimpleNamedEmailAddress, NSURL;

@interface SGOrigin : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _type;
	NSString* _sourceKey;
	NSString* _externalKey;
	NSString* _contextSnippet;
	NSRange _contextSnippetRange;
	CSPerson* _fromPerson;
	NSString* _bundleId;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSDate* _date;
	NSString* _title;
	NSString* _operatingSystemVersion;
	BOOL _shouldShowOperatingSystemVersion;
	BOOL _fromForwardedMessage;
	NSString* _localizedApplicationName;
	NSString* _teamId;

}

@property (nonatomic,readonly) unsigned long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * sourceKey;                                                 //@synthesize sourceKey=_sourceKey - In the implementation block
@property (nonatomic,readonly) NSString * externalKey;                                               //@synthesize externalKey=_externalKey - In the implementation block
@property (nonatomic,readonly) NSString * contextSnippet; 
@property (nonatomic,readonly) NSRange contextSnippetRange; 
@property (nonatomic,readonly) SGSimpleNamedEmailAddress * from; 
@property (nonatomic,readonly) CSPerson * fromPerson;                                                //@synthesize fromPerson=_fromPerson - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                                                  //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * localizedApplicationName;                                  //@synthesize localizedApplicationName=_localizedApplicationName - In the implementation block
@property (nonatomic,readonly) NSString * teamId;                                                    //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,readonly) NSArray * to;                                                         //@synthesize to=_to - In the implementation block
@property (nonatomic,readonly) NSArray * cc;                                                         //@synthesize cc=_cc - In the implementation block
@property (nonatomic,readonly) NSArray * bcc;                                                        //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (getter=isFromForwardedMessage,nonatomic,readonly) BOOL fromForwardedMessage;              //@synthesize fromForwardedMessage=_fromForwardedMessage - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
+(id)originForDuplicateKey:(id)arg1 sourceKey:(id)arg2 store:(id)arg3 ;
+(id)originForDuplicateKey:(id)arg1 entity:(id)arg2 parent:(id)arg3 ;
+(unsigned long long)originTypeForEntityType:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)originWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 bundleId:(id)arg4 fromForwardedMessage:(BOOL)arg5 ;
+(id)originWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(BOOL)arg4 ;
-(void)addDetailsFromOriginatingMessageEntity:(id)arg1 ;
-(void)addSnippetIfNotExistsFromContentOfEntity:(id)arg1 ;
-(void)addDetailsFromOriginatingCalendarEntity:(id)arg1 ;
-(void)addDetailsFromOriginatingInteractionEntity:(id)arg1 ;
-(void)addDetailsFromOriginatingGenericEntity:(id)arg1 ;
-(void)addDetailsFromParticipantsOfEntity:(id)arg1 ;
-(void)addDetailsFromOriginatingContactEntity:(id)arg1 ;
-(NSArray *)to;
-(NSArray *)cc;
-(NSArray *)bcc;
-(SGSimpleNamedEmailAddress *)from;
-(NSString *)teamId;
-(id)init;
-(CSPerson *)fromPerson;
-(NSString *)bundleId;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)externalKey;
-(NSString *)contextSnippet;
-(NSRange)contextSnippetRange;
-(NSURL *)url;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 bundleId:(id)arg4 fromForwardedMessage:(BOOL)arg5 ;
-(void)_resolveAppName;
-(id)universalURL;
-(BOOL)isEqualToOrigin:(id)arg1 ;
-(NSString *)sourceKey;
-(NSDate *)date;
-(BOOL)isFromForwardedMessage;
-(NSString *)localizedApplicationName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

