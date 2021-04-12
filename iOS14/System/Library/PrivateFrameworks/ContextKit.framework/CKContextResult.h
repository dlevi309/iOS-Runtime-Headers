/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
*/

#import <ContextKit/ContextKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSOrderedSet, NSSet;

@interface CKContextResult : NSObject <NSSecureCoding, NSCopying> {

	BOOL _exactMatch;
	NSString* _title;
	NSString* _query;
	long long _minPrefix;
	NSURL* _url;
	NSString* _topicId;
	NSString* _category;
	NSString* _debug;
	NSOrderedSet* _relatedItems;
	NSSet* _tags;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * query;                                   //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) long long minPrefix;                              //@synthesize minPrefix=_minPrefix - In the implementation block
@property (nonatomic,copy) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * topicId;                                 //@synthesize topicId=_topicId - In the implementation block
@property (nonatomic,copy) NSString * portraitId; 
@property (nonatomic,copy) NSString * category;                                //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * debug;                                   //@synthesize debug=_debug - In the implementation block
@property (nonatomic,copy) NSOrderedSet * relatedItems;                        //@synthesize relatedItems=_relatedItems - In the implementation block
@property (nonatomic,copy) NSSet * tags;                                       //@synthesize tags=_tags - In the implementation block
@property (assign,getter=isExactMatch,nonatomic) BOOL exactMatch;              //@synthesize exactMatch=_exactMatch - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(NSString *)query;
-(NSSet *)tags;
-(void)setCategory:(NSString *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDebug:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)topicId;
-(NSURL *)url;
-(id)description;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setTags:(NSSet *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)debug;
-(long long)minPrefix;
-(NSString *)portraitId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRelatedItems:(NSOrderedSet *)arg1 ;
-(void)setMinPrefix:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 query:(id)arg2 url:(id)arg3 category:(id)arg4 ;
-(void)setTopicId:(NSString *)arg1 ;
-(void)setExactMatch:(BOOL)arg1 ;
-(void)setPortraitId:(NSString *)arg1 ;
-(NSOrderedSet *)relatedItems;
-(BOOL)isExactMatch;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

