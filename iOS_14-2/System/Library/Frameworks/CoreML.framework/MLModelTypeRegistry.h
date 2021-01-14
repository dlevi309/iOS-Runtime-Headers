/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLModelTypeRegistry : NSObject
+(id)sharedInstance;
-(id)init;
-(Class)loadNeuralNetworkClass:(BOOL)arg1 ;
-(Class)classForLoadingModelType:(int)arg1 isUpdatable:(BOOL)arg2 ;
-(Class)classForLoadingModelType:(int)arg1 ;
-(Class)classForCompilingModelType:(int)arg1 ;
@end

