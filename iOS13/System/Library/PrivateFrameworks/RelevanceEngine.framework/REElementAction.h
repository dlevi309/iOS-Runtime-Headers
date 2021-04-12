/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol REElementActionDelegate;
@interface REElementAction : NSObject <NSCopying, NSCoding> {

	id<REElementActionDelegate> _delegate;
	BOOL _forceExecution;

}

@property (assign,nonatomic) BOOL forceExecution;                                      //@synthesize forceExecution=_forceExecution - In the implementation block
@property (assign,nonatomic,__weak) id<REElementActionDelegate> delegate; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<REElementActionDelegate>)delegate;
-(void)setDelegate:(id<REElementActionDelegate>)arg1 ;
-(void)setForceExecution:(BOOL)arg1 ;
-(void)_performWithContext:(id)arg1 ;
-(void)_didFinish:(BOOL)arg1 ;
-(BOOL)forceExecution;
@end

