/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSDictionary;

@interface IMPreviewGeneratorManager : NSObject {

	NSDictionary* _UTITypes;
	NSDictionary* _dynamicTypes;

}

@property (nonatomic,copy) NSDictionary * UTITypes;                  //@synthesize UTITypes=_UTITypes - In the implementation block
@property (nonatomic,copy) NSDictionary * dynamicTypes;              //@synthesize dynamicTypes=_dynamicTypes - In the implementation block
+(id)sharedInstance;
-(BOOL)persistPreviewToDiskCache:(CGImageRef)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
-(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
-(id)init;
-(void)setUTITypes:(NSDictionary *)arg1 ;
-(NSDictionary *)UTITypes;
-(void)setDynamicTypes:(NSDictionary *)arg1 ;
-(Class)_previewGeneratorClassForSourceURL:(id)arg1 ;
-(BOOL)generateAndPersistMapPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out CGSize*)arg3 previewConstraints:(IMPreviewConstraints)arg4 error:(id*)arg5 ;
-(BOOL)generateAndPersistContactCardPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out CGSize*)arg3 previewConstraints:(IMPreviewConstraints)arg4 error:(id*)arg5 ;
-(BOOL)movePreviewToDiskCache:(id)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
-(Class)previewGeneratorClassForUTIType:(id)arg1 ;
-(NSDictionary *)dynamicTypes;
-(BOOL)generateAndPersistPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out CGSize*)arg3 previewConstraints:(IMPreviewConstraints)arg4 error:(id*)arg5 ;
-(BOOL)sizePreviewFromSourceURL:(id)arg1 size:(out CGSize*)arg2 previewConstraints:(IMPreviewConstraints)arg3 error:(id*)arg4 ;
-(void)dealloc;
@end

