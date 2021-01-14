/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(NSArray *)familyMembers;
-(void)startFetch;
-(VUIMediaAPIClient *)mediaClient;
-(void)setMediaClient:(VUIMediaAPIClient *)arg1 ;
-(void)_orderFamilyMembersByFirstName;
@end

