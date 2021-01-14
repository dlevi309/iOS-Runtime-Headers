/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKitCore/_UIDiffableDataSourceOutlineSectionController.h>

@class NSManagedObjectContext;

@interface ICRDSectionController : _UIDiffableDataSourceOutlineSectionController {

	NSManagedObjectContext* _legacyViewContext;
	NSManagedObjectContext* _modernViewContext;
	unsigned long long _sectionControllerType;

}

@property (nonatomic,readonly) NSManagedObjectContext * legacyViewContext;              //@synthesize legacyViewContext=_legacyViewContext - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * modernViewContext;              //@synthesize modernViewContext=_modernViewContext - In the implementation block
@property (nonatomic,readonly) unsigned long long sectionControllerType;                //@synthesize sectionControllerType=_sectionControllerType - In the implementation block
-(NSManagedObjectContext *)modernViewContext;
-(NSManagedObjectContext *)legacyViewContext;
-(id)initWithDiffableDataSource:(id)arg1 sectionControllerType:(unsigned long long)arg2 ;
-(unsigned long long)sectionControllerType;
@end

