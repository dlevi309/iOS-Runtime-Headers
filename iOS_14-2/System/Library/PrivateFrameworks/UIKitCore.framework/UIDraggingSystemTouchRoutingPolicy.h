/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setContextIDsToAlwaysSendTouches:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHitTestingDisabled:(BOOL)arg1 ;
-(BOOL)isHitTestingDisabled;
-(NSArray *)contextIDsToExcludeFromHitTesting;
-(void)setContextIDsToExcludeFromHitTesting:(NSArray *)arg1 ;
-(NSArray *)contextIDsToAlwaysSendTouches;
@end

