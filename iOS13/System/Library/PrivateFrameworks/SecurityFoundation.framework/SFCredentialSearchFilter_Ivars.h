/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


@protocol _SFServiceIdentifier;
@class NSDate, NSArray;

@interface SFCredentialSearchFilter_Ivars : NSObject {

	NSDate* minimumCreationDate;
	NSDate* maximumCreationDate;
	NSDate* minimumModificationDate;
	NSDate* maximumModificationDate;
	NSArray*<_SFServiceIdentifier> serviceIdentifiers;
	NSArray* usernames;

}
@end

