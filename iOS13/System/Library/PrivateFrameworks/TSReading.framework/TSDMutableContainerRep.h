/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDMutableContainerRep <TSDContainerRep>
@property (nonatomic,readonly) NSObject*<TSDMutableContainerInfo> mutableContainerInfo; 
@required
-(void)setChildReps:(id)arg1;
-(void)addChildRep:(id)arg1;
-(void)insertChildRep:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)insertChildRep:(id)arg1 below:(id)arg2;
-(void)insertChildRep:(id)arg1 above:(id)arg2;
-(void)removeChildRep:(id)arg1;
-(void)replaceChildRep:(id)arg1 with:(id)arg2;
-(NSObject*<TSDMutableContainerInfo>)mutableContainerInfo;

@end

