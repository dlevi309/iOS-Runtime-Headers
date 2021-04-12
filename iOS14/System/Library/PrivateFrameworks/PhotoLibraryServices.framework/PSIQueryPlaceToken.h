/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PSIQueryToken.h>

@class NSDictionary;

@interface PSIQueryPlaceToken : PSIQueryToken {

	NSDictionary* _locationNameByCategory;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithText:(id)arg1 locationNameByCategory:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)parentToken;
@end

