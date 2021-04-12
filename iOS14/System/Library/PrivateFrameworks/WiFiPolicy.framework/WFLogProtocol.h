/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

@class NSNumber;


@protocol WFLogProtocol <NSObject>
@property (getter=getLogLifespanInDays,copy) NSNumber * logLifespanInDays; 
@property (getter=getLogPrivacy) unsigned long long logPrivacy; 
@property (getter=getLogLevelEnable) unsigned long long logLevelEnable; 
@property (getter=getLogLevelPersist) unsigned long long logLevelPersist; 
@property (getter=getMaxFileSizeInMB) unsigned long long maxSizeInKb; 
@required
-(void)dump;
-(void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char*)arg3 valist:(char*)arg4;
-(void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(const CFStringRef)arg3;
-(id)getLogLifespanInDays;
-(void)setLogLifespanInDays:(id)arg1;
-(unsigned long long)getLogPrivacy;
-(void)setLogPrivacy:(unsigned long long)arg1;
-(unsigned long long)getLogLevelEnable;
-(void)setLogLevelEnable:(unsigned long long)arg1;
-(unsigned long long)getLogLevelPersist;
-(void)setLogLevelPersist:(unsigned long long)arg1;
-(unsigned long long)getMaxFileSizeInMB;
-(void)setMaxSizeInKb:(unsigned long long)arg1;

@end

