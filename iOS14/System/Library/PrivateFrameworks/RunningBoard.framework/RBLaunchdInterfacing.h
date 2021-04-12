/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBLaunchdInterfacing <NSObject>
@required
-(id)copyJobWithPid:(int)arg1;
-(id)domainForPid:(int)arg1;
-(id)propertiesForPid:(int)arg1 error:(out id*)arg2;
-(id)propertiesForJob:(id)arg1 error:(out id*)arg2;
-(id)submitExtension:(id)arg1 overlay:(id)arg2 domain:(id)arg3 error:(out id*)arg4;
-(id)copyJobWithLabel:(id)arg1 domain:(id)arg2;
-(id)domainForUser:(unsigned)arg1;
-(id)copyJobsManagedBy:(id)arg1 error:(out id*)arg2;
-(id)currentDomain;
-(id)jobWithPlist:(id)arg1;
-(id)forJob:(id)arg1 createInstance:(unsigned char)arg2 error:(out id*)arg3;
-(id)jobWithPlist:(id)arg1 domain:(id)arg2;

@end

