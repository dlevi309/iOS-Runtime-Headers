/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol REScriptBuffer <NSObject>
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) unsigned short current; 
@required
-(BOOL)isEmpty;
-(void)next;
-(unsigned short)current;
-(id)contentForLine:(unsigned long long)arg1;

@end

