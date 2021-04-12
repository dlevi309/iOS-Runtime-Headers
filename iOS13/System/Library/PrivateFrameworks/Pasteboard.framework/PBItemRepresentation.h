/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
*/


@protocol PBItemRepresentationDataTransferDelegate;
@class NSString;

@interface PBItemRepresentation : NSObject {

	/*^block*/id _loader;
	BOOL _isDataAvailableImmediately;
	NSString* _typeIdentifier;
	unsigned long long _preferredRepresentation;
	long long _visibility;
	id<PBItemRepresentationDataTransferDelegate> _dataTransferDelegate;

}

@property (assign,nonatomic) unsigned long long preferredRepresentation;                                            //@synthesize preferredRepresentation=_preferredRepresentation - In the implementation block
@property (assign,nonatomic,__weak) id<PBItemRepresentationDataTransferDelegate> dataTransferDelegate;              //@synthesize dataTransferDelegate=_dataTransferDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeIdentifier;                                                      //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (assign,nonatomic) long long visibility;                                                                  //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) BOOL isDataAvailableImmediately;                                                       //@synthesize isDataAvailableImmediately=_isDataAvailableImmediately - In the implementation block
-(void)setVisibility:(long long)arg1 ;
-(NSString *)typeIdentifier;
-(void)setPreferredRepresentation:(unsigned long long)arg1 ;
-(unsigned long long)preferredRepresentation;
-(id<PBItemRepresentationDataTransferDelegate>)dataTransferDelegate;
-(void)setDataTransferDelegate:(id<PBItemRepresentationDataTransferDelegate>)arg1 ;
-(id)performProgressTrackingWithLoaderBlock:(/*^block*/id)arg1 onCancelCallback:(/*^block*/id)arg2 ;
-(id)initWithType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 loader:(/*^block*/id)arg3 ;
-(id)copyWithDoNothingLoaderBlock;
-(void)setLoaderBlock:(/*^block*/id)arg1 ;
-(long long)visibility;
-(id)loadWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)loadFileCopyWithCompletion:(/*^block*/id)arg1 ;
-(id)loadDataWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isDataAvailableImmediately;
-(id)_loadCompletionBlock:(/*^block*/id)arg1 ;
-(id)loadOpenInPlaceWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithNSItemRepresentation:(id)arg1 ;
-(id)v2_loadCompletionBlock:(/*^block*/id)arg1 ;
-(void)v2_setLoader:(/*^block*/id)arg1 ;
-(id)v2_loadOpenInPlaceWithCompletion:(/*^block*/id)arg1 ;
-(void)setIsDataAvailableImmediately:(BOOL)arg1 ;
@end

