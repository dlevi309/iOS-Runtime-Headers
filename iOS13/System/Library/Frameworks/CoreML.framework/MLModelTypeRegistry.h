/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLModelTypeRegistry : NSObject
+(id)sharedInstance;
-(id)init;
-(Class)classForLoadingModelType:(int)arg1 ;
-(Class)classForLoadingModelType:(int)arg1 isUpdatable:(BOOL)arg2 ;
-(Class)classForCompilingModelType:(int)arg1 ;
@end

