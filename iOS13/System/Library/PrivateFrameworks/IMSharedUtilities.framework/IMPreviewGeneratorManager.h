/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSDictionary *)UTITypes;
-(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
-(void)setUTITypes:(NSDictionary *)arg1 ;
-(void)setDynamicTypes:(NSDictionary *)arg1 ;
-(Class)_previewGeneratorClassForSourceURL:(id)arg1 ;
-(BOOL)generateAndPersistMapPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out CGSize*)arg3 previewConstraints:(IMPreviewConstraints)arg4 error:(id*)arg5 ;
-(BOOL)persistPreviewToDiskCache:(CGImageRef)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)movePreviewToDiskCache:(id)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
-(Class)previewGeneratorClassForUTIType:(id)arg1 ;
-(BOOL)_utiTypeIsHEICish:(id)arg1 ;
-(NSDictionary *)dynamicTypes;
-(BOOL)generateAndPersistPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out CGSize*)arg3 previewConstraints:(IMPreviewConstraints)arg4 error:(id*)arg5 ;
-(BOOL)sizePreviewFromSourceURL:(id)arg1 size:(out CGSize*)arg2 previewConstraints:(IMPreviewConstraints)arg3 error:(id*)arg4 ;
@end

