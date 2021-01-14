/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface FCTopicalNodeElement : NSObject <NSCopying> {

	NSString* _identifier;
	NSSet* _topics;
	double _score;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSSet * topics;                     //@synthesize topics=_topics - In the implementation block
@property (assign,nonatomic) double score;                       //@synthesize score=_score - In the implementation block
-(id)initWithIdentifier:(id)arg1 topics:(id)arg2 score:(double)arg3 ;
-(double)score;
-(void)setScore:(double)arg1 ;
-(NSSet *)topics;
-(void)setTopics:(NSSet *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

