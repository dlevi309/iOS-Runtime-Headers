/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)newRenderJob;
-(id)initWithComposition:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 ;
-(id)initWithRequest:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 ;
-(NSString *)dataExtractor;
-(void)setDataExtractor:(NSString *)arg1 ;
@end

