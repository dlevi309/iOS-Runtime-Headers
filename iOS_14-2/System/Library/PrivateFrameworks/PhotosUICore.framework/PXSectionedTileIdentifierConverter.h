/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTileIdentifierConverter.h>

@class PXSectionedDataSource, NSArray, NSIndexSet, NSString;

@interface PXSectionedTileIdentifierConverter : NSObject <PXTileIdentifierConverter> {

	PXSectionedDataSource* _fromDataSource;
	PXSectionedDataSource* _toDataSource;
	NSArray* _changeDetails;
	NSIndexSet* _reloadedTileKindsOnObjectChanged;

}

@property (nonatomic,readonly) PXSectionedDataSource * fromDataSource;                 //@synthesize fromDataSource=_fromDataSource - In the implementation block
@property (nonatomic,readonly) PXSectionedDataSource * toDataSource;                   //@synthesize toDataSource=_toDataSource - In the implementation block
@property (nonatomic,readonly) NSArray * changeDetails;                                //@synthesize changeDetails=_changeDetails - In the implementation block
@property (nonatomic,copy) NSIndexSet * reloadedTileKindsOnObjectChanged;              //@synthesize reloadedTileKindsOnObjectChanged=_reloadedTileKindsOnObjectChanged - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithFromDataSource:(id)arg1 toDataSource:(id)arg2 changeDetails:(id)arg3 ;
-(NSIndexSet *)reloadedTileKindsOnObjectChanged;
-(void)setReloadedTileKindsOnObjectChanged:(NSIndexSet *)arg1 ;
-(PXSectionedDataSource *)fromDataSource;
-(PXSectionedDataSource *)toDataSource;
-(BOOL)reverseTransformTileIdentifier:(PXTileIdentifier*)arg1 ;
-(BOOL)transformTileIdentifier:(PXTileIdentifier*)arg1 group:(unsigned long long*)arg2 ;
-(NSArray *)changeDetails;
@end

