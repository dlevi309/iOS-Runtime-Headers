/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CallHistory-Structs.h>
#import <CallHistory/CHSynchronizable.h>

@interface CHLogServer : CHSynchronizable {

	unordered_map<const char *, os_log_s *, std::__1::hash<const char *>, std::__1::equal_to<const char *>, std::__1::allocator<std::__1::pair<const char *const, os_log_s *> > >* fLogHandles;

}
+(id)instance;
-(id)init;
-(void)createLogHandleForDomainSync:(const char*)arg1 ;
-(os_log_sRef)logHandleForDomain:(const char*)arg1 ;
-(os_log_sRef)logHandleForDomainSync:(const char*)arg1 ;
@end

