/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHQuery.h>

@class CHRecognitionSessionIndexableContent;

@interface CHIndexableContentQuery : CHQuery {

	CHRecognitionSessionIndexableContent* _indexableContent;

}

@property (setter=_setIndexableContent:,retain) CHRecognitionSessionIndexableContent * indexableContent;              //@synthesize indexableContent=_indexableContent - In the implementation block
-(void)dealloc;
-(id)debugName;
-(id)initWithRecognitionSession:(id)arg1 ;
-(CHRecognitionSessionIndexableContent *)indexableContent;
-(void)q_updateQueryResult;
-(void)_setIndexableContent:(id)arg1 ;
@end

