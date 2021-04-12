/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface OITSUBacktrace : NSObject {

	void* _callstack;
	int _frames;
	int _initAdjustment;

}
+(id)new;
+(id)backtrace;
+(id)caller;
+(id)callee;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)caller;
-(id)callee;
-(id)backtraceString;
-(id)initWithAdjustment:(int)arg1 ;
-(id)callerAtIndex:(long long)arg1 ;
@end

