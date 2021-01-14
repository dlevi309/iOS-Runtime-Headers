/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRange:(NSRange)arg1 ;
-(id)init;
-(NSRange)range;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRange:(NSRange)arg1 andType:(unsigned long long)arg2 machineGenerated:(BOOL)arg3 ;
-(BOOL)machineGenerated;
-(void)setMachineGenerated:(BOOL)arg1 ;
@end

