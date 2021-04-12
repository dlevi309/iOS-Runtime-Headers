/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@interface NetworkCursor : NSObject {

	vector<unsigned long, std::__1::allocator<unsigned long> >* _nodeIndexes;
	unsigned long long _stateType;

}

@property (assign,nonatomic) unsigned long long stateType;              //@synthesize stateType=_stateType - In the implementation block
+(id)cursorByAddingNodeIndex:(unsigned long long)arg1 toCursor:(id)arg2 ;
-(id)init;
-(unsigned long long)stateType;
-(void)setStateType:(unsigned long long)arg1 ;
-(BOOL)isCompletePattern;
-(unsigned long long)nodeIndexCount;
-(unsigned long long)nodeIndexAtPosition:(unsigned long long)arg1 ;
-(void)addNodeIndex:(unsigned long long)arg1 withStateType:(unsigned long long)arg2 ;
@end

