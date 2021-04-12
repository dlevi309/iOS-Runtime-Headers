/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ESDContainer;

@interface ESDObject : NSObject {

	EshObject* mEshObject;
	ESDContainer* mParent;
	BOOL mIsChart;

}
-(id)initWithType:(unsigned short)arg1 ;
-(id)parent;
-(BOOL)isChart;
-(int)shapeID;
-(void)dealloc;
-(EshObject*)eshObject;
-(EshGroup*)eshGroup;
-(EshShape*)eshShape;
-(id)initWithEshObject:(EshObject*)arg1 ;
-(id)initFromReader:(OcReader*)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3 ;
-(void)writeToWriter:(OcWriter*)arg1 ;
-(void)setChart:(BOOL)arg1 ;
-(id)initForExcelBinaryWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
-(id)initPBWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
@end

