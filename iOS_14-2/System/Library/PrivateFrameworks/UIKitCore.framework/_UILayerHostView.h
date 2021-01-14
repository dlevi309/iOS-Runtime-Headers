/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 pid:(int)arg2 contextID:(unsigned)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setInheritsSecurity:(BOOL)arg1 ;
-(void)setPid:(int)arg1 contextID:(unsigned)arg2 ;
-(CALayerHost *)layerHost;
-(BOOL)inheritsSecurity;
-(void)setContextID:(unsigned)arg1 ;
-(unsigned)contextID;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

