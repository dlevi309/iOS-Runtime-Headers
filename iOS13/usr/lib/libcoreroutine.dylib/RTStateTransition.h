/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface RTStateTransition : NSObject <NSSecureCoding> {

	NSMutableArray* _listTransitions;

}

@property (nonatomic,retain) NSMutableArray * listTransitions;              //@synthesize listTransitions=_listTransitions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setListTransitions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)listTransitions;
-(void)addStateTransitionOneTimeTransFromStateTransition:(id)arg1 ;
-(void)submitTransition:(id)arg1 ;
-(void)showTransition;
-(void)cleanTransition:(double)arg1 ;
-(id)getPredTrans:(double)arg1 duration:(double)arg2 numOfWeeks:(int)arg3 uniqueID:(id)arg4 ;
@end

