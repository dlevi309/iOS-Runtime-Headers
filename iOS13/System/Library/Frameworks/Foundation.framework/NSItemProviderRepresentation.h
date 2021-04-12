/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString;

@interface NSItemProviderRepresentation : NSObject {

	/*^block*/id _loader;
	NSString* _typeIdentifier;
	long long _visibility;
	long long _preferredRepresentation;

}

@property (nonatomic,copy,readonly) NSString * typeIdentifier;               //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (assign,nonatomic) long long visibility;                           //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) long long preferredRepresentation;              //@synthesize preferredRepresentation=_preferredRepresentation - In the implementation block
-(void)dealloc;
-(id)initWithType_v2:(id)arg1 preferredRepresentation:(long long)arg2 loader:(/*^block*/id)arg3 ;
-(void)setVisibility:(long long)arg1 ;
-(NSString *)typeIdentifier;
-(void)setPreferredRepresentation:(long long)arg1 ;
-(long long)preferredRepresentation;
-(id)loadDataWithOptions_v2:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)loadFileCopyWithOptions_v2:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)loadOpenInPlaceWithOptions_v2:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)loadWithOptions_v2:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)performProgressTrackingWithLoaderBlock:(/*^block*/id)arg1 onCancelCallback:(/*^block*/id)arg2 ;
-(id)_loadWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setLoaderBlock_v2:(/*^block*/id)arg1 ;
-(id)initWithType:(id)arg1 preferredRepresentation:(long long)arg2 loader:(/*^block*/id)arg3 ;
-(id)copyWithDoNothingLoaderBlock;
-(id)loadWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLoaderBlock:(/*^block*/id)arg1 ;
-(id)loadDataWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)loadFileCopyWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)loadOpenInPlaceWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)visibility;
@end

