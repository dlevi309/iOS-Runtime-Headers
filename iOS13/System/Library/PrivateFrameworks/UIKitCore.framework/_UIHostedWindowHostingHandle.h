/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIHostedWindowHostingHandle : NSObject <NSSecureCoding> {

	int _pid;
	unsigned _contextID;
	CGAffineTransform _rootLayerTransform;
	CGRect _rootLayerFrame;

}

@property (nonatomic,readonly) int pid;                                           //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                                //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,readonly) CGAffineTransform rootLayerTransform;              //@synthesize rootLayerTransform=_rootLayerTransform - In the implementation block
@property (nonatomic,readonly) CGRect rootLayerFrame;                             //@synthesize rootLayerFrame=_rootLayerFrame - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)hostedWindowHostingHandleWithContextID:(unsigned)arg1 rootLayerTransform:(CGAffineTransform)arg2 rootLayerFrame:(CGRect)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)contextID;
-(int)pid;
-(CGAffineTransform)rootLayerTransform;
-(CGRect)rootLayerFrame;
@end

