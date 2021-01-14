/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BMTestEvent : BMEventBase <BMStoreData, NSSecureCoding> {

	SCD_Struct_BM0 _data;

}

@property (nonatomic,readonly) unsigned dataVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(unsigned)dataVersion;
-(id)serialize;
-(unsigned)content;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForuint32_t:(unsigned)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)initWithContent:(unsigned)arg1 dataVersion:(unsigned)arg2 ;
@end

