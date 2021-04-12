/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContactGroup.h>

@class CNGroup, NSArray;

@interface WFCNContactGroup : WFContactGroup {

	CNGroup* _group;
	NSArray* _cachedMembers;

}

@property (nonatomic,retain) NSArray * cachedMembers;              //@synthesize cachedMembers=_cachedMembers - In the implementation block
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) CNGroup * group;                    //@synthesize group=_group - In the implementation block
+(id)allContactGroups;
+(id)contactGroupWithCNGroup:(id)arg1 ;
-(CNGroup *)group;
-(NSArray *)contacts;
-(id)name;
-(BOOL)containsContact:(id)arg1 ;
-(id)initWithCNGroup:(id)arg1 ;
-(NSArray *)cachedMembers;
-(void)setCachedMembers:(NSArray *)arg1 ;
@end

