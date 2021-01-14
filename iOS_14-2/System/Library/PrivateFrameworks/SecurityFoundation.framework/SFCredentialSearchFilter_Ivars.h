/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

