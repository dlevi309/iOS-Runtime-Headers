/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
-(id)init;
-(NSString *)debugDescription;
-(void)invalidate;
-(CLNotifierBase*)notifier;
-(void)register:(R)arg1 forNotification:(id)arg2 registrationInfo:(int)arg3 :(id)arg4 ;
-(void)unregister:(R)arg1 forNotification:(id)arg2 :(int)arg3 ;
-(void)setAdaptedNotifier:(CLNotifierBase*)arg1 ;
-(void)forget:(R)arg1 :(id)arg2 ;
-(int)notifierClientNumForCoparty:(id)arg1 ;
@end

