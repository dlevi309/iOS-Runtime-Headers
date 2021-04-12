/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, EDAMNoteFilter, NSNumber;

@interface EDAMSearchRecord : FATObject {

	NSString* _userQuery;
	EDAMNoteFilter* _noteFilter;
	NSNumber* _searchScope;
	NSNumber* _searchTime;
	NSString* _selectedNoteGUID;
	NSNumber* _selectTime;
	NSNumber* _noteRank;
	NSNumber* _noteCount;

}

@property (nonatomic,retain) NSString * userQuery;                     //@synthesize userQuery=_userQuery - In the implementation block
@property (nonatomic,retain) EDAMNoteFilter * noteFilter;              //@synthesize noteFilter=_noteFilter - In the implementation block
@property (nonatomic,retain) NSNumber * searchScope;                   //@synthesize searchScope=_searchScope - In the implementation block
@property (nonatomic,retain) NSNumber * searchTime;                    //@synthesize searchTime=_searchTime - In the implementation block
@property (nonatomic,retain) NSString * selectedNoteGUID;              //@synthesize selectedNoteGUID=_selectedNoteGUID - In the implementation block
@property (nonatomic,retain) NSNumber * selectTime;                    //@synthesize selectTime=_selectTime - In the implementation block
@property (nonatomic,retain) NSNumber * noteRank;                      //@synthesize noteRank=_noteRank - In the implementation block
@property (nonatomic,retain) NSNumber * noteCount;                     //@synthesize noteCount=_noteCount - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)userQuery;
-(void)setUserQuery:(NSString *)arg1 ;
-(void)setSearchScope:(NSNumber *)arg1 ;
-(NSNumber *)searchScope;
-(EDAMNoteFilter *)noteFilter;
-(void)setNoteFilter:(EDAMNoteFilter *)arg1 ;
-(NSNumber *)searchTime;
-(void)setSearchTime:(NSNumber *)arg1 ;
-(NSString *)selectedNoteGUID;
-(void)setSelectedNoteGUID:(NSString *)arg1 ;
-(NSNumber *)selectTime;
-(void)setSelectTime:(NSNumber *)arg1 ;
-(NSNumber *)noteRank;
-(void)setNoteRank:(NSNumber *)arg1 ;
-(NSNumber *)noteCount;
-(void)setNoteCount:(NSNumber *)arg1 ;
@end

