/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SBSRemoteContentPreferences : NSObject <NSSecureCoding> {

	long long _dateTimeStyle;
	long long _backgroundStyle;
	long long _homeGestureMode;
	BOOL _reducesWhitePoint;
	BOOL _suppressesNotifications;
	BOOL _suppressesBottomEdgeContent;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(long long)backgroundStyle;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)dateTimeStyle;
-(id)initWithConfiguration:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)homeGestureMode;
-(BOOL)reducesWhitePoint;
-(BOOL)suppressesNotifications;
-(BOOL)suppressesBottomEdgeContent;
@end

