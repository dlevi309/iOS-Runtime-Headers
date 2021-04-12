/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

@class NSData;


@protocol MSVSegmentedSubEncoder <NSObject>
@property (nonatomic,readonly) BOOL hasTopLevelData; 
@property (readonly) NSData * encodedData; 
@required
-(NSData *)encodedData;
-(void)finishEncodingPartialTopLevelObject;
-(void)beginEncodingPartialTopLevelObject:(id)arg1;
-(BOOL)hasTopLevelData;

@end

