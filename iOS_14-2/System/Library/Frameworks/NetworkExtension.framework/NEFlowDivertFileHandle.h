/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initFromDictionary:(id)arg1 ;
-(NSData *)keyMaterial;
-(id)description;
-(id)initFlowDivertControlSocketDisableAppMap:(BOOL)arg1 ;
-(id)dictionary;
-(id)initFlowDivertDataSocket;
-(unsigned long long)type;
-(NSNumber *)controlUnit;
-(id)getUnitForSocket:(int)arg1 ;
-(id)initFlowDivertControlSocket;
@end

