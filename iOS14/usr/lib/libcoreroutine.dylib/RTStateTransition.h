/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id)initWithCoder:(id)arg1 ;
-(void)setListTransitions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)listTransitions;
-(void)addStateTransitionOneTimeTransFromStateTransition:(id)arg1 ;
-(void)submitTransition:(id)arg1 ;
-(void)showTransition;
-(void)cleanTransition:(double)arg1 ;
-(id)getPredTrans:(double)arg1 duration:(double)arg2 numOfWeeks:(int)arg3 uniqueID:(id)arg4 ;
@end

