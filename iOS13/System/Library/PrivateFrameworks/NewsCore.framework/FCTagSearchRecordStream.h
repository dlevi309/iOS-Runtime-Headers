/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCStreaming.h>

@class CKQueryCursor, NSMutableSet, NSString;

@interface FCTagSearchRecordStream : NSObject <FCStreaming> {

	BOOL _fetching;
	BOOL _finished;
	/*^block*/id _operationConstructor;
	CKQueryCursor* _cursor;
	NSMutableSet* _encounteredRecordIDs;

}

@property (nonatomic,copy) id operationConstructor;                            //@synthesize operationConstructor=_operationConstructor - In the implementation block
@property (nonatomic,retain) CKQueryCursor * cursor;                           //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) BOOL fetching;                                    //@synthesize fetching=_fetching - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                  //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSMutableSet * encounteredRecordIDs;              //@synthesize encounteredRecordIDs=_encounteredRecordIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CKQueryCursor *)cursor;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(void)setCursor:(CKQueryCursor *)arg1 ;
-(id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)fetching;
-(void)setFetching:(BOOL)arg1 ;
-(void)setOperationConstructor:(id)arg1 ;
-(id)operationConstructor;
-(NSMutableSet *)encounteredRecordIDs;
-(void)setEncounteredRecordIDs:(NSMutableSet *)arg1 ;
@end

