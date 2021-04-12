/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface PDCommentAuthor : NSObject {

	unsigned mId;
	NSString* mName;
	NSString* mInitials;
	unsigned mLastCommentIndex;
	unsigned mColorIndex;

}
-(id)init;
-(id)description;
-(id)name;
-(void)setName:(id)arg1 ;
-(unsigned)id;
-(void)setId:(unsigned)arg1 ;
-(id)initials;
-(unsigned)colorIndex;
-(void)setColorIndex:(unsigned)arg1 ;
-(void)setLastCommentIndex:(unsigned)arg1 ;
-(void)setInitials:(id)arg1 ;
-(unsigned)lastCommentIndex;
@end

