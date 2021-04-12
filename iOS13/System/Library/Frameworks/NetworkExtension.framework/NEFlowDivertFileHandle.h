/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEFileHandle.h>

@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle {

	NSNumber* _controlUnit;
	NSData* _keyMaterial;

}

@property (readonly) NSNumber * controlUnit;              //@synthesize controlUnit=_controlUnit - In the implementation block
@property (readonly) NSData * keyMaterial;                //@synthesize keyMaterial=_keyMaterial - In the implementation block
-(id)description;
-(unsigned long long)type;
-(id)dictionary;
-(id)initFromDictionary:(id)arg1 ;
-(id)initFlowDivertControlSocketDisableAppMap:(BOOL)arg1 ;
-(id)getUnitForSocket:(int)arg1 ;
-(NSNumber *)controlUnit;
-(NSData *)keyMaterial;
-(id)initFlowDivertControlSocket;
-(id)initFlowDivertDataSocket;
@end

