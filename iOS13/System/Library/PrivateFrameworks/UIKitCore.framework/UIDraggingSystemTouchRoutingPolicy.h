/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface UIDraggingSystemTouchRoutingPolicy : NSObject <NSSecureCoding> {

	BOOL _hitTestingDisabled;
	NSArray* _contextIDsToAlwaysSendTouches;
	NSArray* _contextIDsToExcludeFromHitTesting;

}

@property (nonatomic,copy) NSArray * contextIDsToAlwaysSendTouches;                            //@synthesize contextIDsToAlwaysSendTouches=_contextIDsToAlwaysSendTouches - In the implementation block
@property (nonatomic,copy) NSArray * contextIDsToExcludeFromHitTesting;                        //@synthesize contextIDsToExcludeFromHitTesting=_contextIDsToExcludeFromHitTesting - In the implementation block
@property (assign,getter=isHitTestingDisabled,nonatomic) BOOL hitTestingDisabled;              //@synthesize hitTestingDisabled=_hitTestingDisabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)contextIDsToAlwaysSendTouches;
-(void)setContextIDsToAlwaysSendTouches:(NSArray *)arg1 ;
-(NSArray *)contextIDsToExcludeFromHitTesting;
-(BOOL)isHitTestingDisabled;
-(void)setContextIDsToExcludeFromHitTesting:(NSArray *)arg1 ;
-(void)setHitTestingDisabled:(BOOL)arg1 ;
@end

