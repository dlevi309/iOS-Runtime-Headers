/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) MSPCloudSynchronizer * synchronizer;              //@synthesize synchronizer=_synchronizer - In the implementation block
@property (nonatomic,retain) MSPContainer * container;                         //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) MSPCloudContainer * cloudContainer;               //@synthesize cloudContainer=_cloudContainer - In the implementation block
@property (assign,nonatomic) BOOL requiresMerge;                               //@synthesize requiresMerge=_requiresMerge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(MSPContainer *)container;
-(void)setContainer:(MSPContainer *)arg1 ;
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5 ;
-(void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2 ;
-(void)cloudContainerDidChange:(id)arg1 ;
-(void)mergeWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelMergeWithError:(id)arg1 ;
-(id)initWithContainer:(id)arg1 synchronizer:(id)arg2 ;
-(void)setSynchronizer:(MSPCloudSynchronizer *)arg1 ;
-(void)setRequiresMerge:(BOOL)arg1 ;
-(MSPCloudContainer *)cloudContainer;
-(BOOL)requiresMerge;
-(MSPCloudSynchronizer *)synchronizer;
-(void)setRequiresMerge:(BOOL)arg1 withReason:(unsigned long long)arg2 ;
-(void)prepareCloudWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCloudContainer:(MSPCloudContainer *)arg1 ;
@end

