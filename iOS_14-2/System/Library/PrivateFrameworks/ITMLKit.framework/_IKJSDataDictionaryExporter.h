/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>

@class IKHandle, NSMutableArray, IKJSDataObservable;

@interface _IKJSDataDictionaryExporter : IKJSObject {

	IKHandle* _dataDictionaryHandle;
	NSMutableArray* _touchedPropertyPaths;
	IKJSDataObservable* _dataObservable;

}

@property (nonatomic,__weak,readonly) IKJSDataObservable * dataObservable;              //@synthesize dataObservable=_dataObservable - In the implementation block
+(id)_dataDictionaryObjectFromObject:(id)arg1 forAccessorSequence:(id)arg2 ;
+(id)_dataDictionaryObjectFromValue:(id)arg1 inContext:(id)arg2 ;
+(id)_updatedDataDictionaryObject:(id)arg1 fromValue:(id)arg2 forPropertyPaths:(id)arg3 inContext:(id)arg4 ;
+(id)_dataDictionaryObjectFromValueRef:(OpaqueJSValueRef)arg1 inContextRef:(OpaqueJSContextRef)arg2 ;
-(IKJSDataObservable *)dataObservable;
-(id)dataDictionaryObject;
-(id)initWithAppContext:(id)arg1 dataObservable:(id)arg2 ;
-(void)touchPropertyPath:(id)arg1 ;
@end

