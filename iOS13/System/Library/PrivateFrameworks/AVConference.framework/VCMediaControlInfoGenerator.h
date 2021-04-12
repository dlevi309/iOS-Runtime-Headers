/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaControlInfoDelegate.h>

@class NSMutableArray, NSString;

@interface VCMediaControlInfoGenerator : NSObject <VCMediaControlInfoDelegate> {

	unsigned _type;
	CFDictionaryRef _callbacksDict;
	NSMutableArray* _controlInfoPool;
	opaque_pthread_mutex_t _controlInfoPoolLock;
	unsigned char _version;
	unsigned _optionBitmap;

}

@property (readonly) unsigned type;                                 //@synthesize type=_type - In the implementation block
@property (readonly) unsigned char version;                         //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned)type;
-(unsigned char)version;
-(void*)newControlInfo;
-(void*)newControlInfoWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC78*)arg3 ;
-(id)newControlInfoFromPool;
-(void)disposeControlInfo:(id)arg1 ;
-(id)initWithType:(unsigned)arg1 version:(unsigned char)arg2 ;
-(int)registerFillBlobCallback:(/*function pointer*/void*)arg1 processBlobCallback:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(int)deregisterCallbacksWithContext:(void*)arg1 ;
-(void*)newMediaControlInfo;
-(void*)newMediaControlInfoWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC78*)arg3 ;
-(int)addMediaControlInfoOption:(unsigned)arg1 ;
-(unsigned long long)feedbackSize;
@end

