/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCMediaControlInfoDelegate;
#import <AVConference/AVConference-Structs.h>
@interface VCMediaControlInfo : NSObject {

	unsigned short _bitmap;
	unsigned long long _serializedSize;
	id<VCMediaControlInfoDelegate> _delegate;
	unsigned char _version;
	unsigned char _fecFeedbackVersion;

}

@property (readonly) unsigned long long serializedSize;                  //@synthesize serializedSize=_serializedSize - In the implementation block
@property (assign) id<VCMediaControlInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned char version;                                //@synthesize version=_version - In the implementation block
@property (assign) unsigned char fecFeedbackVersion;                     //@synthesize fecFeedbackVersion=_fecFeedbackVersion - In the implementation block
-(id<VCMediaControlInfoDelegate>)delegate;
-(void)dispose;
-(void)setDelegate:(id<VCMediaControlInfoDelegate>)arg1 ;
-(void)invalidate;
-(void)setVersion:(unsigned char)arg1 ;
-(unsigned char)version;
-(unsigned long long)serializedSize;
-(id)initWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC95*)arg3 version:(unsigned char)arg4 ;
-(int)configureWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC95*)arg3 ;
-(void)setFecFeedbackVersion:(unsigned char)arg1 ;
-(unsigned char)fecFeedbackVersion;
-(int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned)arg3 ;
-(int)setInfoUnserialized:(SCD_Struct_VC196*)arg1 type:(unsigned)arg2 ;
-(BOOL)hasInfoType:(unsigned)arg1 ;
-(int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned)arg4 ;
-(int)getInfoUnserialized:(SCD_Struct_VC196*)arg1 type:(unsigned)arg2 ;
-(int)serializeToBuffer:(char*)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3 ;
@end

