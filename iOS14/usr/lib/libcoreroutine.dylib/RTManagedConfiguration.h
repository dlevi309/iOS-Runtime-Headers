/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isDiagnosticsAndUsageAllowed;
-(BOOL)isFindMyCarAllowed;
-(BOOL)effectiveBoolValueForSetting:(id)arg1 ;
@end

