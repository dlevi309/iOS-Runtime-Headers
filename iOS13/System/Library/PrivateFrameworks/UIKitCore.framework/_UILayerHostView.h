/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisibilityPropagationView.h>

@class CALayerHost;

@interface _UILayerHostView : _UIVisibilityPropagationView {

	int _pid;
	unsigned _contextID;

}

@property (assign,nonatomic) unsigned contextID; 
@property (assign,nonatomic) BOOL inheritsSecurity; 
@property (nonatomic,retain,readonly) CALayerHost * layerHost; 
+(Class)layerClass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)contextID;
-(void)setContextID:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 pid:(int)arg2 contextID:(unsigned)arg3 ;
-(void)setPid:(int)arg1 contextID:(unsigned)arg2 ;
-(void)setInheritsSecurity:(BOOL)arg1 ;
-(BOOL)inheritsSecurity;
-(CALayerHost *)layerHost;
@end

