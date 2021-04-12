/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPContainerObserver.h>
#import <libobjc.A.dylib/MSPCloudContainerObserver.h>

@class MSPCloudSynchronizer, MSPContainer, MSPCloudContainer, NSString;

@interface MSPSynchronizedContainer : NSObject <MSPContainerObserver, MSPCloudContainerObserver> {

	BOOL _requiresMerge;
	MSPCloudSynchronizer* _synchronizer;
	MSPContainer* _container;
	MSPCloudContainer* _cloudContainer;

}

@property (assign,nonatomic,__weak) MSPCloudSynchronizer * synchronizer;              //@synthesize synchronizer=_synchronizer - In the implementation block
@property (nonatomic,retain) MSPContainer * container;                                //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) MSPCloudContainer * cloudContainer;                      //@synthesize cloudContainer=_cloudContainer - In the implementation block
@property (assign,nonatomic) BOOL requiresMerge;                                      //@synthesize requiresMerge=_requiresMerge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequiresMerge:(BOOL)arg1 ;
-(void)setRequiresMerge:(BOOL)arg1 withReason:(unsigned long long)arg2 ;
-(void)mergeWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelMergeWithError:(id)arg1 ;
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5 ;
-(id)initWithContainer:(id)arg1 synchronizer:(id)arg2 ;
-(void)setContainer:(MSPContainer *)arg1 ;
-(NSString *)description;
-(MSPCloudSynchronizer *)synchronizer;
-(void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2 ;
-(void)cloudContainerDidChange:(id)arg1 ;
-(MSPContainer *)container;
-(BOOL)requiresMerge;
-(void)prepareCloudWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MSPCloudContainer *)cloudContainer;
-(void)setCloudContainer:(MSPCloudContainer *)arg1 ;
-(void)setSynchronizer:(MSPCloudSynchronizer *)arg1 ;
@end

