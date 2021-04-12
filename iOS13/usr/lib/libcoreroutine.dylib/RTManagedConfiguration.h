/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTManagedConfigurationObserver;
#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTManagedConfiguration : NSObject {

	id<RTManagedConfigurationObserver> _delegate;

}

@property (assign,nonatomic,__weak) id<RTManagedConfigurationObserver> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(id<RTManagedConfigurationObserver>)delegate;
-(void)setDelegate:(id<RTManagedConfigurationObserver>)arg1 ;
-(BOOL)effectiveBoolValueForSetting:(id)arg1 ;
-(BOOL)isFindMyCarAllowed;
-(BOOL)isDiagnosticsAndUsageAllowed;
@end

