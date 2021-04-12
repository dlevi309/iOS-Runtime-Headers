/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PSIQueryToken.h>

@class NSDictionary;

@interface PSIQueryPlaceToken : PSIQueryToken {

	NSDictionary* _locationNameByCategory;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)parentToken;
-(id)initWithText:(id)arg1 locationNameByCategory:(id)arg2 ;
@end

