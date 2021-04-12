/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSString;

@interface ADContext : NSObject <NSCopying> {

	NSMutableSet* _tags;
	NSString* _requestJSON;

}

@property (nonatomic,retain) NSMutableSet * tags;               //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSString * requestJSON;              //@synthesize requestJSON=_requestJSON - In the implementation block
-(NSMutableSet *)tags;
-(id)initWithTags:(id)arg1 ;
-(BOOL)_matchesClause:(id)arg1 inContext:(id)arg2 ;
-(NSString *)requestJSON;
-(BOOL)isFeed;
-(void)setRequestJSON:(NSString *)arg1 ;
-(void)setContextInfoForConfiguration:(id)arg1 ;
-(id)fullContext;
-(void)setTags:(NSMutableSet *)arg1 ;
-(BOOL)matchesForNewContext:(id)arg1 matchClauses:(id)arg2 excludeTags:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

