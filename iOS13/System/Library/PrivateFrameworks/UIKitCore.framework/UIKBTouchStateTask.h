/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setIsBusy:(BOOL)arg1 ;
-(BOOL)isBusy;
-(id)task;
-(id)initWithTouchState:(id)arg1 andTask:(/*^block*/id)arg2 ;
-(UIKBTouchState *)touchState;
@end

