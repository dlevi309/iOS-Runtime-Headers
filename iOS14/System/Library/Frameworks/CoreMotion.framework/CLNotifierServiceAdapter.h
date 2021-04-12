/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <LocationSupport/CLIntersiloService.h>
#import <libobjc.A.dylib/CLNotifierServiceProtocol.h>

@class NSString;

@interface CLNotifierServiceAdapter : CLIntersiloService <CLNotifierServiceProtocol> {

	map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int> > >* _clients;
	CLNotifierBase* _notifier;

}

@property (nonatomic,readonly) CLNotifierBase* notifier;              //@synthesize notifier=_notifier - In the implementation block
@property (assign,nonatomic) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)forget:(R)arg1 :(id)arg2 ;
-(CLNotifierBase*)notifier;
-(id)init;
-(int)notifierClientNumForCoparty:(id)arg1 ;
-(NSString *)debugDescription;
-(void)setAdaptedNotifier:(CLNotifierBase*)arg1 ;
-(void)register:(R)arg1 forNotification:(id)arg2 registrationInfo:(int)arg3 :(id)arg4 ;
-(void)invalidate;
-(void)unregister:(R)arg1 forNotification:(id)arg2 :(int)arg3 ;
@end

