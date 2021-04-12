/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchSafariBookmarksResultObject : CATTaskResultObject {

	NSArray* _bookmarks;

}

@property (nonatomic,copy,readonly) NSArray * bookmarks;              //@synthesize bookmarks=_bookmarks - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)bookmarks;
-(void)_appendDescriptionOfBookmark:(id)arg1 toString:(id)arg2 level:(unsigned long long)arg3 ;
-(id)initWithBookmarks:(id)arg1 ;
@end

