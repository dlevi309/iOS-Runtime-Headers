/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libBKDM2.dylib
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface DiagsProfileListener : NSObject <MCProfileConnectionObserver> {

	/*^block*/id _callback;

}

@property (nonatomic,copy) id callback;                             //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
@end

