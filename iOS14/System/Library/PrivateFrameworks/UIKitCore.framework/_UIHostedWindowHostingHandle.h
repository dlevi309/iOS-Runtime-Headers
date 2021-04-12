/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)pid;
-(CGRect)rootLayerFrame;
-(void)encodeWithCoder:(id)arg1 ;
-(CGAffineTransform)rootLayerTransform;
-(unsigned)contextID;
-(id)initWithCoder:(id)arg1 ;
@end

