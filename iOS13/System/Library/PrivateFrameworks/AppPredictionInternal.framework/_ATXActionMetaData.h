/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _ATXActionMetaData : NSObject <NSSecureCoding> {

	BOOL _shouldPredict;
	BOOL _shouldPredictLockScreen;
	NSString* _actionKey;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,readonly) NSString * actionKey;                      //@synthesize actionKey=_actionKey - In the implementation block
@property (nonatomic,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldPredict;                        //@synthesize shouldPredict=_shouldPredict - In the implementation block
@property (nonatomic,readonly) BOOL shouldPredictLockScreen;              //@synthesize shouldPredictLockScreen=_shouldPredictLockScreen - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)actionKey;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 shouldPredict:(BOOL)arg3 shouldPredictLockScreen:(BOOL)arg4 actionKey:(id)arg5 ;
-(BOOL)shouldPredict;
-(BOOL)shouldPredictLockScreen;
@end

