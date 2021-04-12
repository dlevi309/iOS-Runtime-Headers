/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureDepthDataSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _discardsLateDepthData;
	BOOL _filteringEnabled;

}

@property (assign,nonatomic) BOOL discardsLateDepthData;              //@synthesize discardsLateDepthData=_discardsLateDepthData - In the implementation block
@property (assign,nonatomic) BOOL filteringEnabled;                   //@synthesize filteringEnabled=_filteringEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDiscardsLateDepthData:(BOOL)arg1 ;
-(void)setFilteringEnabled:(BOOL)arg1 ;
-(BOOL)filteringEnabled;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(BOOL)discardsLateDepthData;
@end

