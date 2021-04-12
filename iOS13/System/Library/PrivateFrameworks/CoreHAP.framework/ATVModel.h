/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


#import <CoreHAP/CoreHAP-Structs.h>
@class NSDictionary;

@interface ATVModel : NSObject {

	NSDictionary* _atvLUT;

}

@property (retain) NSDictionary * atvLUT;              //@synthesize atvLUT=_atvLUT - In the implementation block
+(void)addTuple:(id)arg1 ToLUT:(id)arg2 ;
+(unsigned long long)atvStateFromState:(BTStatus*)arg1 ;
-(id)init;
-(NSDictionary *)atvLUT;
-(id)findTupleForATVState:(unsigned long long)arg1 ;
-(void)setAtvLUT:(NSDictionary *)arg1 ;
@end

