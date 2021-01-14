/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSArray, NSString;

@interface CHUISAvocadoHostCancelTouchesAssertion : NSObject <BSInvalidatable> {

	BOOL _invalidated;
	NSArray* _assertions;

}

@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assertions;                        //@synthesize assertions=_assertions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)assertions;
-(BOOL)isInvalidated;
-(id)init;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(id)initWithAssertions:(id)arg1 ;
@end

