/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/


@class NSString, NSIndexPath, TUCall;

@interface RTTUtteranceRequest : NSObject {

	unsigned long long _index;
	NSString* _string;
	NSIndexPath* _cellIndexPath;
	TUCall* _call;

}

@property (assign,nonatomic) unsigned long long index;                        //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSString * string;                               //@synthesize string=_string - In the implementation block
@property (assign,nonatomic,__weak) NSIndexPath * cellIndexPath;              //@synthesize cellIndexPath=_cellIndexPath - In the implementation block
@property (nonatomic,retain) TUCall * call;                                   //@synthesize call=_call - In the implementation block
+(id)utteranceRequestWithIndex:(unsigned long long)arg1 forString:(id)arg2 inCellPath:(id)arg3 call:(id)arg4 ;
-(unsigned long long)index;
-(TUCall *)call;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)description;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setCall:(TUCall *)arg1 ;
-(void)setCellIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)cellIndexPath;
@end

