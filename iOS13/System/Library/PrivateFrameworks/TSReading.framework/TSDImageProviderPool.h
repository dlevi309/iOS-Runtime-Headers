/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPDataCullingListener.h>

@class TSUPointerKeyDictionary, NSString;

@interface TSDImageProviderPool : NSObject <TSPDataCullingListener> {

	TSUPointerKeyDictionary* mImageDataToImageProviderMap;
	unsigned long long mOpenFileDescriptorLimit;
	BOOL mHaveRaisedFileDescriptorLimit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedPool;
+(id)_singletonAlloc;
+(BOOL)isValidImageData:(id)arg1 ;
+(Class)p_providerClassForData:(id)arg1 ;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)willCullData:(id)arg1 ;
-(id)temporaryProviderForData:(id)arg1 shouldValidate:(BOOL)arg2 ;
-(void)addInterestInProviderForData:(id)arg1 ;
-(void)removeInterestInProviderForData:(id)arg1 ;
-(id)providerForData:(id)arg1 shouldValidate:(BOOL)arg2 ;
-(void)p_updateFileDescriptorLimit;
-(void)p_didReceiveMemoryWarning:(id)arg1 ;
-(id)p_providerForData:(id)arg1 temporary:(BOOL)arg2 shouldValidate:(BOOL)arg3 ;
-(unsigned long long)p_providerLimitForFileDescriptorLimit:(unsigned long long)arg1 ;
-(void)p_freeFileDescriptorsWithProviderCount:(unsigned long long)arg1 ;
-(unsigned long long)p_removeProvidersWithZeroInterest;
-(void)willCloseDocumentContext:(id)arg1 ;
-(void)flushImageProviders;
@end

