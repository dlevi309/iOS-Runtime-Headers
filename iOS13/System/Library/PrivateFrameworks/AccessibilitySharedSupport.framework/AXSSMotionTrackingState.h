/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSSet, NSString;

@interface AXSSMotionTrackingState : NSObject <NSCopying, NSSecureCoding> {

	NSError* _error;
	NSSet* _expressions;
	CGPoint _lookAtPoint;

}

@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) CGPoint lookAtPoint;                        //@synthesize lookAtPoint=_lookAtPoint - In the implementation block
@property (nonatomic,copy) NSSet * expressions;                          //@synthesize expressions=_expressions - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugString; 
@property (nonatomic,readonly) BOOL hasFace; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSSet *)expressions;
-(void)setExpressions:(NSSet *)arg1 ;
-(NSString *)debugString;
-(CGPoint)lookAtPoint;
-(void)setLookAtPoint:(CGPoint)arg1 ;
-(BOOL)hasFace;
@end

