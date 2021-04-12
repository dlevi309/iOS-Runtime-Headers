/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface CFPDSourceLookUpKey : NSObject {

	CFStringRef domain;
	CFStringRef userName;
	CFStringRef containerPath;
	CFStringRef cloudPath;
	BOOL byHost;
	BOOL managed;
	BOOL managedUsesContainer;
	BOOL cloud;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

