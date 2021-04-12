/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchSafariBookmarksResultObject : CATTaskResultObject {

	NSArray* _bookmarks;

}

@property (nonatomic,copy,readonly) NSArray * bookmarks;              //@synthesize bookmarks=_bookmarks - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)_appendDescriptionOfBookmark:(id)arg1 toString:(id)arg2 level:(unsigned long long)arg3 ;
-(id)initWithBookmarks:(id)arg1 ;
-(NSArray *)bookmarks;
@end

