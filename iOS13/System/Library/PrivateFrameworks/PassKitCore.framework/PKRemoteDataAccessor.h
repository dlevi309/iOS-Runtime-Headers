/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDataAccessor.h>

@class PKPassLibrary, NSString;

@interface PKRemoteDataAccessor : PKDataAccessor {

	PKPassLibrary* _library;
	NSString* _objectUniqueID;

}

@property (nonatomic,readonly) PKPassLibrary * library;                //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSString * objectUniqueID;              //@synthesize objectUniqueID=_objectUniqueID - In the implementation block
-(id)content;
-(id)archiveData;
-(PKPassLibrary *)library;
-(void)updateSettings:(unsigned long long)arg1 ;
-(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)dataForBundleResource:(id)arg1 ;
-(id)dataForBundleResources:(id)arg1 ;
-(id)displayProfileOfType:(long long)arg1 ;
-(id)initWithLibrary:(id)arg1 objectUniqueID:(id)arg2 ;
-(NSString *)objectUniqueID;
-(void)noteShared;
-(void)requestUpdateWithCompletion:(/*^block*/id)arg1 ;
@end

