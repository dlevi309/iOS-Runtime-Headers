/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSString;

@interface SFAccessControlEntry_Ivars : NSObject {

	NSString* bundleID;
	struct {
		unsigned isOwner : 1;
		unsigned canRead : 1;
		unsigned canWrite : 1;
	}  accessControlEntryFlags;

}
@end

