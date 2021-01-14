/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)debugString;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(NSSet *)expressions;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasFace;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExpressions:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLookAtPoint:(CGPoint)arg1 ;
-(CGPoint)lookAtPoint;
@end

