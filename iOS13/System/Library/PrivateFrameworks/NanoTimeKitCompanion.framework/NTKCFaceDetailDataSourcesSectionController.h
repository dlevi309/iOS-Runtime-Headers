/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>
#import <libobjc.A.dylib/NTKCFaceDetailToggleCellDelegate.h>
#import <libobjc.A.dylib/NTKCUpNextDataSourcesManagerIdentifiersDelegate.h>

@protocol NTKCFaceDetailDataSourcesSectionDelegate;
@class NTKCUpNextDataSourcesManager, NSString, NSArray;

@interface NTKCFaceDetailDataSourcesSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailToggleCellDelegate, NTKCUpNextDataSourcesManagerIdentifiersDelegate> {

	BOOL _showsTitleWhenEmpty;
	NTKCUpNextDataSourcesManager* _manager;
	NSString* _headerTitle;
	id<NTKCFaceDetailDataSourcesSectionDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * rows; 
@property (nonatomic,retain) NTKCUpNextDataSourcesManager * manager;                                    //@synthesize manager=_manager - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                                                      //@synthesize headerTitle=_headerTitle - In the implementation block
@property (assign,nonatomic) BOOL showsTitleWhenEmpty;                                                  //@synthesize showsTitleWhenEmpty=_showsTitleWhenEmpty - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailDataSourcesSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasDataSourcesSectionForFace:(id)arg1 inGallery:(BOOL)arg2 ;
-(id<NTKCFaceDetailDataSourcesSectionDelegate>)delegate;
-(void)setDelegate:(id<NTKCFaceDetailDataSourcesSectionDelegate>)arg1 ;
-(NTKCUpNextDataSourcesManager *)manager;
-(void)setManager:(NTKCUpNextDataSourcesManager *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(id)titleForHeader;
-(void)toggleCell:(id)arg1 didToggle:(BOOL)arg2 ;
-(BOOL)showsTitleWhenEmpty;
-(id)_getDisabledDataSources;
-(void)_updatedDisabledDataSources:(id)arg1 ;
-(void)_buildRowsWithDataSourceEntries:(id)arg1 ;
-(void)faceDidChange;
-(void)manager:(id)arg1 didUpdateDataSourceEntries:(id)arg2 ;
-(void)setShowsTitleWhenEmpty:(BOOL)arg1 ;
@end

