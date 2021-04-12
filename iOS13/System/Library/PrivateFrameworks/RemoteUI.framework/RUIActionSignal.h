/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/


@class NSMutableArray;

@interface RUIActionSignal : NSObject {

	unsigned long long _topSignal;
	NSMutableArray* _subActions;

}

@property (assign,nonatomic) unsigned long long topSignal;              //@synthesize topSignal=_topSignal - In the implementation block
@property (nonatomic,retain) NSMutableArray * subActions;               //@synthesize subActions=_subActions - In the implementation block
+(id)stringForActionSignal:(unsigned long long)arg1 ;
+(id)signalWithType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setTopSignal:(unsigned long long)arg1 ;
-(void)setSubActions:(NSMutableArray *)arg1 ;
-(unsigned long long)topSignal;
-(NSMutableArray *)subActions;
@end

