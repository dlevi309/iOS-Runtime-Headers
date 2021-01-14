/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface FCSolArticle : NSObject <NSSecureCoding, NSCopying> {

	BOOL _accessible;
	BOOL _evergreen;
	NSString* _identifier;
	NSString* _publisherID;
	double _score;
	NSSet* _whitelistedTopicIDs;
	unsigned long long _groupingReason;

}

@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * publisherID;                         //@synthesize publisherID=_publisherID - In the implementation block
@property (assign,nonatomic) double score;                                   //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL accessible;                                //@synthesize accessible=_accessible - In the implementation block
@property (assign,nonatomic) BOOL evergreen;                                 //@synthesize evergreen=_evergreen - In the implementation block
@property (nonatomic,retain) NSSet * whitelistedTopicIDs;                    //@synthesize whitelistedTopicIDs=_whitelistedTopicIDs - In the implementation block
@property (assign,nonatomic) unsigned long long groupingReason;              //@synthesize groupingReason=_groupingReason - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)score;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(id)description;
-(NSString *)publisherID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)groupingReason;
-(id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(BOOL)arg4 evergreen:(BOOL)arg5 whitelistedTopicIDs:(id)arg6 ;
-(BOOL)accessible;
-(void)setAccessible:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSSet *)whitelistedTopicIDs;
-(void)setPublisherID:(NSString *)arg1 ;
-(void)setEvergreen:(BOOL)arg1 ;
-(void)setWhitelistedTopicIDs:(NSSet *)arg1 ;
-(id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(BOOL)arg4 evergreen:(BOOL)arg5 ;
-(id)initWithID:(id)arg1 publisherID:(id)arg2 accessible:(BOOL)arg3 evergreen:(BOOL)arg4 whitelistedTopicIDs:(id)arg5 ;
-(NSString *)identifier;
-(BOOL)evergreen;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGroupingReason:(unsigned long long)arg1 ;
@end

