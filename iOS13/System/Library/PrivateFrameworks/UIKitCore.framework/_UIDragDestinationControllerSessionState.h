/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIDropSession;
@interface _UIDragDestinationControllerSessionState : NSObject {

	int _state;
	id<UIDropSession> _dropSession;

}

@property (assign,nonatomic) int state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) id<UIDropSession> dropSession;              //@synthesize dropSession=_dropSession - In the implementation block
@property (nonatomic,readonly) BOOL isReordering; 
@property (nonatomic,readonly) BOOL isDragging; 
@property (nonatomic,readonly) BOOL isActive; 
-(id)description;
-(BOOL)isActive;
-(int)state;
-(void)setState:(int)arg1 ;
-(BOOL)isDragging;
-(id<UIDropSession>)dropSession;
-(void)setDropSession:(id<UIDropSession>)arg1 ;
-(BOOL)isReordering;
@end

