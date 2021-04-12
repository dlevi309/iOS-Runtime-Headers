/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCJSONRecordTreeSourceType.h>

@protocol FCContentContext;
@class NSArray;

@interface FCJSONRecordTreeSource : NSObject <FCJSONRecordTreeSourceType> {

	id<FCContentContext> _context;
	NSArray* _jsonRecordSources;

}

@property (nonatomic,retain) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * jsonRecordSources;                 //@synthesize jsonRecordSources=_jsonRecordSources - In the implementation block
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)fetchRecordTreeWithRootIDs:(id)arg1 branchKeysByRecordType:(id)arg2 cachePolicy:(id)arg3 edgeCacheHint:(id)arg4 completion:(/*^block*/id)arg5 ;
-(NSArray *)jsonRecordSources;
-(void)fetchRecordTreeWithRootIDs:(id)arg1 branchKeysByRecordType:(id)arg2 cachePolicy:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithContext:(id)arg1 jsonRecordSources:(id)arg2 ;
-(void)setJsonRecordSources:(NSArray *)arg1 ;
@end

