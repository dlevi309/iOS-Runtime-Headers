/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXReusableObjectPoolDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableDictionary;

@interface PXReusableObjectPool : NSObject {

	SCD_Struct_PX24 _delegateFlags;
	id<PXReusableObjectPoolDelegate> _delegate;
	NSMutableDictionary* __objectCreationBlocksByReuseIdentifier;
	NSMutableDictionary* __reusableObjectsByReuseIdentifier;

}

@property (nonatomic,readonly) NSMutableDictionary * _objectCreationBlocksByReuseIdentifier;              //@synthesize _objectCreationBlocksByReuseIdentifier=__objectCreationBlocksByReuseIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _reusableObjectsByReuseIdentifier;                   //@synthesize _reusableObjectsByReuseIdentifier=__reusableObjectsByReuseIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<PXReusableObjectPoolDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(NSMutableDictionary *)_reusableObjectsByReuseIdentifier;
-(id<PXReusableObjectPoolDelegate>)delegate;
-(void)setDelegate:(id<PXReusableObjectPoolDelegate>)arg1 ;
-(id)checkOutReusableObjectWithReuseIdentifier:(long long)arg1 ;
-(void)registerReusableObjectForReuseIdentifier:(long long)arg1 creationHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)_objectCreationBlocksByReuseIdentifier;
-(void)checkInReusableObject:(id)arg1 ;
@end

