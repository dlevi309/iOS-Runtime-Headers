/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ESDContainer;

@interface ESDObject : NSObject {

	EshObject* mEshObject;
	ESDContainer* mParent;
	BOOL mIsChart;

}
-(void)dealloc;
-(id)parent;
-(id)initWithType:(unsigned short)arg1 ;
-(BOOL)isChart;
-(EshObject*)eshObject;
-(EshGroup*)eshGroup;
-(int)shapeID;
-(EshShape*)eshShape;
-(id)initWithEshObject:(EshObject*)arg1 ;
-(id)initFromReader:(OcReader*)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3 ;
-(void)writeToWriter:(OcWriter*)arg1 ;
-(void)setChart:(BOOL)arg1 ;
-(id)initForExcelBinaryWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
-(id)initPBWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
@end

