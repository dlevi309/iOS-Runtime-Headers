/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/


@protocol _SUICEditScriptData <NSObject>
@required
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;
+(id)EditScriptDataWithArray:(id)arg1;
-(id)stringAtIndex:(long long)arg1;
-(long long)length;
-(id)stringValue;
-(long long)lengthOfItem:(long long)arg1;
-(long long)characterIndexForItem:(long long)arg1;
-(long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2 fallsOnWordBoundary:(BOOL*)arg3;

@end

