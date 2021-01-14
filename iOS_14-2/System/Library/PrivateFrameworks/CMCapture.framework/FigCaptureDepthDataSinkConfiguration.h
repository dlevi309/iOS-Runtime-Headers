/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

@interface FigCaptureDepthDataSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _discardsLateDepthData;
	BOOL _filteringEnabled;

}

@property (assign,nonatomic) BOOL discardsLateDepthData;              //@synthesize discardsLateDepthData=_discardsLateDepthData - In the implementation block
@property (assign,nonatomic) BOOL filteringEnabled;                   //@synthesize filteringEnabled=_filteringEnabled - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)description;
-(BOOL)discardsLateDepthData;
-(BOOL)filteringEnabled;
-(void)setDiscardsLateDepthData:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sinkType;
-(void)setFilteringEnabled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

