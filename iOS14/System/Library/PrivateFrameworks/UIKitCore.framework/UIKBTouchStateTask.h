/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIKBTouchState;

@interface UIKBTouchStateTask : NSObject <NSCopying> {

	UIKBTouchState* _touchState;
	/*^block*/id _task;
	BOOL _isBusy;

}

@property (nonatomic,retain,readonly) UIKBTouchState * touchState;              //@synthesize touchState=_touchState - In the implementation block
@property (nonatomic,copy,readonly) id task;                                    //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) BOOL isBusy;                                       //@synthesize isBusy=_isBusy - In the implementation block
+(id)touchStateTaskForTouchState:(id)arg1 andTask:(/*^block*/id)arg2 ;
-(BOOL)isBusy;
-(long long)compare:(id)arg1 ;
-(id)task;
-(UIKBTouchState *)touchState;
-(void)setIsBusy:(BOOL)arg1 ;
-(id)initWithTouchState:(id)arg1 andTask:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

