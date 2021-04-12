/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKPassLibrary *)library;
-(id)content;
-(void)updateSettings:(unsigned long long)arg1 ;
-(id)initWithLibrary:(id)arg1 objectUniqueID:(id)arg2 ;
-(NSString *)objectUniqueID;
-(void)noteShared;
-(void)requestUpdateWithCompletion:(/*^block*/id)arg1 ;
-(id)cachedImageSetForType:(long long)arg1 withDisplayProfile:(id)arg2 displayTraits:(id)arg3 ;
-(id)passLocalizedStringForKey:(id)arg1 ;
-(id)archiveData;
-(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)dataForBundleResource:(id)arg1 ;
-(id)dataForBundleResources:(id)arg1 ;
-(id)displayProfileOfType:(long long)arg1 ;
@end

