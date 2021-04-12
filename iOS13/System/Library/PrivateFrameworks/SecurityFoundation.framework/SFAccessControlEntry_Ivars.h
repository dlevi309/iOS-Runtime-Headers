/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

