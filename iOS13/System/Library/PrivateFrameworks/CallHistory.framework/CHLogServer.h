/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CallHistory-Structs.h>
#import <CallHistory/CHSynchronizable.h>

@interface CHLogServer : CHSynchronizable {

	unordered_map<const char *, os_log_s *, std::__1::hash<const char *>, std::__1::equal_to<const char *>, std::__1::allocator<std::__1::pair<const char *const, os_log_s *> > >* fLogHandles;

}
+(id)instance;
-(id)init;
-(os_log_sRef)logHandleForDomain:(const char*)arg1 ;
-(os_log_sRef)logHandleForDomainSync:(const char*)arg1 ;
-(void)createLogHandleForDomainSync:(const char*)arg1 ;
@end

