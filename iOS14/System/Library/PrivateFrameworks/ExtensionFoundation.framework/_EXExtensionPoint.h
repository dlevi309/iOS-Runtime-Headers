/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExtensionFoundation.framework/ExtensionFoundation
*/

#import <ExtensionFoundation/ExtensionFoundation-Structs.h>
#import <libobjc.A.dylib/EXExtensionPoint.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface _EXExtensionPoint : NSObject <EXExtensionPoint, NSCopying> {

	unsigned _platform;
	NSString* _identifier;
	NSDictionary* _SDKDictionary;

}

@property (retain) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (setter=DKDictionary,retain) NSDictionary * SDKDictionary;              //@synthesize SDKDictionary=_SDKDictionary - In the implementation block
@property (assign) unsigned platform;                                             //@synthesize platform=_platform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)platform;
-(NSDictionary *)SDKDictionary;
-(void)setPlatform:(unsigned)arg1 ;
-(void)reset;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSDKDictionary:(NSDictionary *)arg1 ;
@end

