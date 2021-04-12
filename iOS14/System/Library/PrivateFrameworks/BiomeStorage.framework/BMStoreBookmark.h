/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
*/

#import <libobjc.A.dylib/BMBookmark.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BMProtoBufWrapper.h>

@class NSString;

@interface BMStoreBookmark : NSObject <BMBookmark, NSSecureCoding, BMProtoBufWrapper> {

	NSString* _streamId;
	NSString* _segmentName;
	double _iterationStartTime;
	unsigned long long _offset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * streamId;                    //@synthesize streamId=_streamId - In the implementation block
@property (nonatomic,readonly) NSString * segmentName;                 //@synthesize segmentName=_segmentName - In the implementation block
@property (nonatomic,readonly) double iterationStartTime;              //@synthesize iterationStartTime=_iterationStartTime - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProto:(id)arg1 ;
-(NSString *)segmentName;
-(id)initWithProtoData:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)proto;
-(id)encodeAsProto;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_descriptionDict;
-(unsigned long long)offset;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)streamId;
-(double)iterationStartTime;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithStream:(id)arg1 segment:(id)arg2 iterationStartTime:(double)arg3 offset:(unsigned long long)arg4 ;
@end

