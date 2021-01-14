/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageRenderRequest.h>

@class NSString, NSDictionary;

@interface NUImageDataRequest : NUImageRenderRequest {

	NSString* _dataExtractor;
	NSDictionary* _options;

}

@property (copy) NSString * dataExtractor;              //@synthesize dataExtractor=_dataExtractor - In the implementation block
@property (copy) NSDictionary * options;                //@synthesize options=_options - In the implementation block
-(NSDictionary *)options;
-(id)initWithComposition:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newRenderJob;
-(id)initWithComposition:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 ;
-(id)initWithRequest:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 ;
-(NSString *)dataExtractor;
-(void)setDataExtractor:(NSString *)arg1 ;
@end

