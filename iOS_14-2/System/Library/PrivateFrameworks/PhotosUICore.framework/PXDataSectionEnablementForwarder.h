/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXDataSectionManagerChangeObserver.h>

@protocol PXDataSectionManagerEnabling;
@class PXDataSectionManager, NSString;

@interface PXDataSectionEnablementForwarder : NSObject <PXDataSectionManagerChangeObserver> {

	PXDataSectionManager* _sourceDataSectionManager;
	id<PXDataSectionManagerEnabling> _enablementTarget;

}

@property (nonatomic,readonly) PXDataSectionManager * sourceDataSectionManager;                     //@synthesize sourceDataSectionManager=_sourceDataSectionManager - In the implementation block
@property (assign,nonatomic,__weak) id<PXDataSectionManagerEnabling> enablementTarget;              //@synthesize enablementTarget=_enablementTarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEnablementTarget:(id<PXDataSectionManagerEnabling>)arg1 ;
-(id)initWithSourceDataSectionManager:(id)arg1 ;
-(void)_updateEnablement;
-(PXDataSectionManager *)sourceDataSectionManager;
-(id<PXDataSectionManagerEnabling>)enablementTarget;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

