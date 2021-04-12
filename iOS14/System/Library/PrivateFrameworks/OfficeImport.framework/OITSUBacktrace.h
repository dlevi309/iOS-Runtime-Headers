/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface OITSUBacktrace : NSObject {

	void* _callstack;
	int _frames;
	int _initAdjustment;

}
+(id)new;
+(id)caller;
+(id)callee;
+(id)backtrace;
-(id)caller;
-(id)init;
-(id)callee;
-(unsigned long long)hash;
-(id)backtraceString;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithAdjustment:(int)arg1 ;
-(id)callerAtIndex:(long long)arg1 ;
@end

