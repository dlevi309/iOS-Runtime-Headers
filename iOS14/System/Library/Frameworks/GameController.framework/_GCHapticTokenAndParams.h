/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


#import <GameController/GameController-Structs.h>
@class NSMutableArray;

@interface _GCHapticTokenAndParams : NSObject {

	NSMutableArray* _params;
	unsigned long long _token;

}

@property (nonatomic,retain) NSMutableArray * params;                 //@synthesize params=_params - In the implementation block
@property (nonatomic,readonly) unsigned long long token;              //@synthesize token=_token - In the implementation block
-(void)setParams:(NSMutableArray *)arg1 ;
-(unsigned long long)token;
-(NSMutableArray *)params;
-(id)initWithHapticCommand:(const HapticCommand*)arg1 ;
@end

