/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface FCSolArticle : NSObject <NSSecureCoding, NSCopying> {

	BOOL _accessible;
	NSString* _identifier;
	NSString* _publisherID;
	double _score;
	NSSet* _whitelistedTopicIDs;

}

@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * publisherID;                   //@synthesize publisherID=_publisherID - In the implementation block
@property (assign,nonatomic) double score;                             //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL accessible;                          //@synthesize accessible=_accessible - In the implementation block
@property (nonatomic,retain) NSSet * whitelistedTopicIDs;              //@synthesize whitelistedTopicIDs=_whitelistedTopicIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)publisherID;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)score;
-(void)setScore:(double)arg1 ;
-(id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(BOOL)arg4 whitelistedTopicIDs:(id)arg5 ;
-(BOOL)accessible;
-(NSSet *)whitelistedTopicIDs;
-(void)setPublisherID:(NSString *)arg1 ;
-(void)setAccessible:(BOOL)arg1 ;
-(void)setWhitelistedTopicIDs:(NSSet *)arg1 ;
-(id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(BOOL)arg4 ;
@end

