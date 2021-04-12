/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


#import <ResponseKit/ResponseKit-Structs.h>
@interface RKTextAnnotation : NSObject {

	BOOL _machineGenerated;
	unsigned long long _type;
	NSRange _range;

}

@property (assign) NSRange range;                        //@synthesize range=_range - In the implementation block
@property (assign) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign) BOOL machineGenerated;                //@synthesize machineGenerated=_machineGenerated - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithRange:(NSRange)arg1 andType:(unsigned long long)arg2 machineGenerated:(BOOL)arg3 ;
-(BOOL)machineGenerated;
-(void)setMachineGenerated:(BOOL)arg1 ;
@end

