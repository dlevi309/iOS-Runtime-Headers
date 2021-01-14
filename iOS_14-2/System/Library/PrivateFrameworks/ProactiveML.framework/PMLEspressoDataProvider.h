/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/ETDataProvider.h>

@class NSArray, NSData, NSString, NSMutableData;

@interface PMLEspressoDataProvider : NSObject <ETDataProvider> {

	NSArray* _rowsData;
	NSData* _labelsData;
	NSString* _inputName;
	unsigned long long _inputDim;
	NSString* _trueLabelName;
	unsigned long long _numberOfDataPoints;
	NSMutableData* _inputBuffer;
	NSMutableData* _trueLabelBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)numberOfDataPoints;
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithRowsData:(id)arg1 labelsData:(id)arg2 inputName:(id)arg3 inputDim:(unsigned long long)arg4 trueLabelName:(id)arg5 ;
-(void)clearBuffers;
@end

