/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/

#import <CVNLP/CVNLP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CVNLPLexiconCursors : NSObject <NSCopying> {

	NSArray* _cursors;
	NSArray* __sortedCursors;

}

@property (nonatomic,retain) NSArray * _sortedCursors;              //@synthesize _sortedCursors=__sortedCursors - In the implementation block
@property (nonatomic,readonly) NSArray * cursors;                   //@synthesize cursors=_cursors - In the implementation block
-(long long)count;
-(NSArray *)cursors;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCursors:(id)arg1 ;
-(void)enumerateLexiconCursorsSortedByPriorityWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)_sortedCursors;
-(void)set_sortedCursors:(NSArray *)arg1 ;
@end

