/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTags:(id)arg1 ;
-(NSMutableSet *)tags;
-(void)setTags:(NSMutableSet *)arg1 ;
-(id)fullContext;
-(void)setContextInfoForConfiguration:(id)arg1 ;
-(BOOL)matchesForNewContext:(id)arg1 matchClauses:(id)arg2 excludeTags:(id)arg3 ;
-(BOOL)isFeed;
-(NSString *)requestJSON;
-(BOOL)_matchesClause:(id)arg1 inContext:(id)arg2 ;
-(void)setRequestJSON:(NSString *)arg1 ;
@end

