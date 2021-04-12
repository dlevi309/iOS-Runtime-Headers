/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUILibraryDataSource.h>

@class NSArray, VUIMediaAPIClient;

@interface VUILibraryFamilyMembersDataSource : VUILibraryDataSource {

	NSArray* _familyMembers;
	VUIMediaAPIClient* _mediaClient;

}

@property (nonatomic,retain) VUIMediaAPIClient * mediaClient;              //@synthesize mediaClient=_mediaClient - In the implementation block
@property (nonatomic,retain) NSArray * familyMembers;                      //@synthesize familyMembers=_familyMembers - In the implementation block
-(id)init;
-(NSArray *)familyMembers;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(void)startFetch;
-(VUIMediaAPIClient *)mediaClient;
-(void)setMediaClient:(VUIMediaAPIClient *)arg1 ;
-(void)_orderFamilyMembersByFirstName;
@end

