/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


@class SCRCArgumentHolderPrivate;

@interface SCRCArgumentHolder : NSObject {

	SCRCArgumentHolderPrivate* _private;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)argument;
-(SEL)action;
-(BOOL)process;
-(void)setAction:(SEL)arg1 ;
-(BOOL)isRequired;
-(id)option;
-(void)setArgument:(id)arg1 ;
-(void)setOption:(id)arg1 ;
-(id)argumentDescription;
-(void)setArgumentDescription:(id)arg1 ;
-(void)setIsRequired:(BOOL)arg1 ;
@end

