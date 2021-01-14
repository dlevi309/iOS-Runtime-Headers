/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<UIDropSession>)dropSession;
-(BOOL)isActive;
-(void)setDropSession:(id<UIDropSession>)arg1 ;
-(id)description;
-(BOOL)isReordering;
-(BOOL)isDragging;
-(void)setState:(int)arg1 ;
-(int)state;
@end

