/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol REScriptBuffer <NSObject>
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) unsigned short current; 
@required
-(void)next;
-(unsigned short)current;
-(BOOL)isEmpty;
-(id)contentForLine:(unsigned long long)arg1;

@end

