/*
* Generated on Thursday, January 14, 2021 at 2:29:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libBasebandManagerICE.dylib
*/


#import <libBasebandManagerICE.dylib/libBasebandManagerICE.dylib-Structs.h>
@interface ABMTapToRadar : NSObject {

	int fMode;
	queue* fQueue;
	unsigned fMaxUniqueSignatures;
	unsigned fMinTimeBetweenSameNotificationSec;

}
+(id)sharedInstance;
-(id)init;
-(void)setMode:(int)arg1 ;
-(int)getMode;
-(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)findLogFiles_sync:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg1 :(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg2 ;
-(BOOL)checkTraces_sync:(int)arg1 :(BOOL)arg2 ;
-(BOOL)checkAudioTraces_sync;
-(BOOL)checkNotificationCriteria:(int*)arg1 :(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg2 :(BOOL)arg3 ;
-(void)showNotification:(int)arg1 :(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg2 :(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg3 :(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg4 :(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg5 ;
@end

