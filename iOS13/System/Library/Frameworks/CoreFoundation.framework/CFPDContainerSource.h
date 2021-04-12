/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDSource.h>

@interface CFPDContainerSource : CFPDSource {

	CFStringRef _containerPath;

}
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 container:(CFStringRef)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 shmemIndex:(short)arg6 daemon:(id)arg7 ;
-(CFStringRef)container;
@end

