/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<REElementActionDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<REElementActionDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setForceExecution:(BOOL)arg1 ;
-(void)_performWithContext:(id)arg1 ;
-(void)_didFinish:(BOOL)arg1 ;
-(BOOL)forceExecution;
@end

