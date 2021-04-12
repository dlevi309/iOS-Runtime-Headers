/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUILibraryShelvesDataSource.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>

@class VUIFamilyMember, NSMutableSet, NSString;

@interface VUIFamilySharingLibraryShelvesDataSource : VUILibraryShelvesDataSource <VUILibraryDataSourceDelegate> {

	VUIFamilyMember* _familyMember;
	NSMutableSet* _fetchedDataSources;

}

@property (nonatomic,retain) VUIFamilyMember * familyMember;                 //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,retain) NSMutableSet * fetchedDataSources;              //@synthesize fetchedDataSources=_fetchedDataSources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIFamilyMember *)familyMember;
-(void)setFamilyMember:(VUIFamilyMember *)arg1 ;
-(void)dealloc;
-(void)startFetch;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(id)_dataSourceForShelves;
-(NSMutableSet *)fetchedDataSources;
-(void)setFetchedDataSources:(NSMutableSet *)arg1 ;
-(id)initWithValidShelfTypes:(id)arg1 withFamilyMember:(id)arg2 ;
@end

