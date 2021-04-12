/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REBluetoothDeviceRelevanceProvider : RERelevanceProvider {

	BOOL _connectedToCar;
	BOOL _connectedToSpeaker;

}

@property (nonatomic,readonly) BOOL connectedToCar;                  //@synthesize connectedToCar=_connectedToCar - In the implementation block
@property (nonatomic,readonly) BOOL connectedToSpeaker;              //@synthesize connectedToSpeaker=_connectedToSpeaker - In the implementation block
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(BOOL)connectedToCar;
-(id)dictionaryEncoding;
-(id)initWithConnectionToCar:(BOOL)arg1 connectionToSpeaker:(BOOL)arg2 ;
-(BOOL)connectedToSpeaker;
@end

