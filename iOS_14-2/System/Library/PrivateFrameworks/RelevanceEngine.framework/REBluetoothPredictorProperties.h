/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class NSDictionary;


@protocol REBluetoothPredictorProperties <REExportedInterface>
@property (readonly) BOOL connectedToCar; 
@property (readonly) BOOL connectedToSpeaker; 
@property (readonly) NSDictionary * localDevices; 
@required
-(NSDictionary *)localDevices;
-(BOOL)connectedToCar;
-(BOOL)connectedToSpeaker;

@end

