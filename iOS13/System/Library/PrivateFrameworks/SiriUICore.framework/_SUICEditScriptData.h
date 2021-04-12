/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/


@protocol _SUICEditScriptData <NSObject>
@required
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;
+(id)EditScriptDataWithArray:(id)arg1;
-(long long)length;
-(id)stringValue;
-(id)stringAtIndex:(long long)arg1;
-(long long)lengthOfItem:(long long)arg1;
-(long long)characterIndexForItem:(long long)arg1;
-(long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2 fallsOnWordBoundary:(BOOL*)arg3;

@end

