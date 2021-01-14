/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <libobjc.A.dylib/CPUIImageRowCellConfigurationProtocol.h>

@class NSString, NSArray;

@interface CPUIImageRowCellConfiguration : NSObject <CPUIImageRowCellConfigurationProtocol> {

	BOOL _showActivityIndicator;
	NSString* _title;
	/*^block*/id _selectGridItemBlock;
	/*^block*/id _selectTitleBlock;
	NSArray* _images;
	NSArray* _artworkCatalogs;

}

@property (nonatomic,copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id selectGridItemBlock;                    //@synthesize selectGridItemBlock=_selectGridItemBlock - In the implementation block
@property (nonatomic,copy) id selectTitleBlock;                       //@synthesize selectTitleBlock=_selectTitleBlock - In the implementation block
@property (nonatomic,retain) NSArray * images;                        //@synthesize images=_images - In the implementation block
@property (nonatomic,retain) NSArray * artworkCatalogs;               //@synthesize artworkCatalogs=_artworkCatalogs - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;              //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configurationWithText:(id)arg1 images:(id)arg2 selectGridItemBlock:(/*^block*/id)arg3 selectTitleBlock:(/*^block*/id)arg4 showActivityIndicator:(BOOL)arg5 ;
+(id)configurationWithText:(id)arg1 artworkCatalogs:(id)arg2 selectGridItemBlock:(/*^block*/id)arg3 selectTitleBlock:(/*^block*/id)arg4 showActivityIndicator:(BOOL)arg5 ;
+(id)configurationWithText:(id)arg1 artworkCatalogs:(id)arg2 selectGridItemBlock:(/*^block*/id)arg3 selectTitleBlock:(/*^block*/id)arg4 ;
-(void)setImages:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)showActivityIndicator;
-(NSArray *)images;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(NSString *)title;
-(void)setArtworkCatalogs:(NSArray *)arg1 ;
-(void)setSelectGridItemBlock:(id)arg1 ;
-(void)setSelectTitleBlock:(id)arg1 ;
-(id)selectGridItemBlock;
-(id)selectTitleBlock;
-(NSArray *)artworkCatalogs;
@end

